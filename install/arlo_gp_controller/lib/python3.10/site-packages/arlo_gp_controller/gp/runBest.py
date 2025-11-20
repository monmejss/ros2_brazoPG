#!/usr/bin/env python3
from __future__ import annotations
import pickle
import rclpy
from rclpy.node import Node

from arlo_gp_controller.gp.gpTree import Tree  # si no se usa, puedes quitarlo
from arlo_gp_controller.gp.gp import GeneticProgram
from arlo_interfaces.srv import EvaluateTree
from arlo_nn_controller.srv import EvaluateDriver


def main():
    rclpy.init()
    node = Node('gp_best')

    node.get_logger().info("Mejor Individuo \n --------------------------------------\n")
    gp = None

    # --- Servicio evaluate_tree (servidor) ---
    def handle_evaluate_tree(request, response):
        # -1 → usa el mejor individuo
        individual = gp.bestParent if request.tree_index == -1 else gp.population[request.tree_index]
        actuator_values = individual.evaluateTree(request.sensor_values)
        response.actuator_values = actuator_values
        return response

    server = node.create_service(EvaluateTree, 'evaluate_tree', handle_evaluate_tree)

    # --- Cliente evaluate_driver (SimulationController) ---
    client = node.create_client(EvaluateDriver, 'evaluate_driver')
    while not client.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('Esperando al servicio evaluate_driver...')

    # --- Cargar gp.dat y reinyectar node si tus árboles lo necesitan ---
    with open('gp.dat', 'rb') as gpFile:
        gp = pickle.load(gpFile)
        gp.bestParent = gp.bestEver.copyTree()

        # Si tus árboles usan el node internamente:
        for t in gp.population:
            t.setRosNode(node)
        if gp.bestParent:
            gp.bestParent.setRosNode(node)
        if gp.bestEver:
            gp.bestEver.setRosNode(node)

        node.get_logger().info('GP loaded from gp.dat')
        gp.population[0].showSymTable()

    node.get_logger().info(f"Best individual | Aptitud: {gp.bestAptitud}")
    gp.bestParent.showTree()

    # --- Ejecutar una evaluación del mejor individuo ---
    req = EvaluateDriver.Request()
    req.maxtime = 60
    req.tree_index = -1
    future = client.call_async(req)

    # Este spin procesa callbacks del servicio evaluate_tree durante la evaluación
    rclpy.spin_until_future_complete(node, future)
    if future.result() is not None:
        res = future.result()
        node.get_logger().info(
            f"Resultado: time={res.time}, dist2go={res.dist2go}, damage={res.damage}, energy={res.energy}"
        )
    else:
        node.get_logger().error("evaluate_driver falló o fue cancelado.")

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
