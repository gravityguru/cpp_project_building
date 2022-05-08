cmake_minimum_required(VERSION 3.0.0)

project(Calculator_project VERSION 1.0.0)

# There is no hierachy in the below mentioned approach. so it is difficult to follow when large number of programs are created.
# So we create libraries.

# Approach 1

# add_executable(calculator
# main.cpp
# addition.cpp
# division.cpp
# print_result.cpp)

# approach 2
add_library(my_math
addition.cpp
division.cpp)

add_library(my_print
print_result.cpp)

add_executable(calculator
main.cpp)
