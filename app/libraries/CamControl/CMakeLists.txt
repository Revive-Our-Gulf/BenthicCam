#--------------------------------------------------------
# Top-Level: CamControlLib
#
# @author: Wild Boar
#
# @Date Created: 2024-05-22
#--------------------------------------------------------

cmake_minimum_required(VERSION 3.0.0)
project(CamControlLib VERSION 0.1.0)

enable_testing()

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(CamControlLib)
add_subdirectory(CamControlTests)

