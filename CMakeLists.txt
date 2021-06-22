cmake_minimum_required(VERSION 3.19)
project(C_BasicCalculator)

set(CMAKE_C_STANDARD 99)

add_executable(C_BasicCalculator main.c)
target_link_libraries(C_BasicCalculator m)
