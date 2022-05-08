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

# now we have to link the ibraries. Using target_link_libraries.

target_link_libraries(calculator my_math my_print)


# guru@guru:~/Desktop/cpp_soft_building/cpp_project_building/Module_2/my_build_dir$ make

# Scanning dependencies of target my_print
# [ 14%] Building CXX object CMakeFiles/my_print.dir/print_result.cpp.o
# [ 28%] Linking CXX static library libmy_print.a
# [ 28%] Built target my_print ------->
# Scanning dependencies of target my_math
# [ 42%] Building CXX object CMakeFiles/my_math.dir/addition.cpp.o
# [ 57%] Building CXX object CMakeFiles/my_math.dir/division.cpp.o
# [ 71%] Linking CXX static library libmy_math.a
# [ 71%] Built target my_math-------------->
# Scanning dependencies of target calculator
# [ 85%] Linking CXX executable calculator
# [100%] Built target calculator-------------->

# Now run the executale usin below command line. 
# guru@guru:~/Desktop/cpp_soft_building/cpp_project_building/Module_2/my_build_dir$  ./calculator 
# Enter First Number      25
# Enter Second Number     23
# Addition  result is:    48
# Division  result is:    1.08696
# guru@guru:~/Desktop/cpp_soft_building/cpp_project_building/Module_2/my_build_dir$ 

# Libraries and executables are called as targets.