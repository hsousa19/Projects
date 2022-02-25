cmake_minimum_required(VERSION 3.21)
project(HelloWrld C)

set(CMAKE_C_STANDARD 11)

add_executable(HelloWrld main.c)

add_compile_options(-Wall -Wextra)
