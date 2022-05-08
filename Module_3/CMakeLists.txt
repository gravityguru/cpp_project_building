cmake_minimum_required(VERSION 3.0.0)

project(Calculator_project VERSION 1.0.0)

add_subdirectory(my_math_dir)
add_subdirectory(my_print_dir)

# We have to create CmakeLists.txt file in the subdirectories as well.

# approach 2
add_library(my_math
addition.cpp
division.cpp)

add_library(my_print
print_result.cpp)

add_executable(calculator
main.cpp)

# now we have to link the ibraries. Using target_link_libraries.

target_link_libraries(calculator  my_math my_print) ## my_math and my_print are dependency for the calculator target.