from setuptools import find_packages
from setuptools import setup

setup(
    name='arlo_nn_controller',
    version='0.0.0',
    packages=find_packages(
        include=('arlo_nn_controller', 'arlo_nn_controller.*')),
)
