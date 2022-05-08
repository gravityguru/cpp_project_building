#include <iostream>
#include "addition.h"
#include "division.h"
#include "print_result.h"

// Run in terminal 
//g++ main.cpp addition.cpp division.cpp print_result.cpp -o calculator
// Dummy comment
// git init
// git add .
// git status
// git commit -m ""
// git remote add origin weblink (Only during the start of the project)
// git push origin master

// Type this in terminal.
// /Desktop/cpp_soft_building/cpp_project_building/Module_2/my_build_dir
// /Desktop/cpp_soft_building/cpp_project_building/Module_2/my_build_dir$ cmake ..
// After writing in Cmakelist.txt
// /Desktop/cpp_soft_building/cpp_project_building/Module_2/my_build_dir$ cmake ..
// /Desktop/cpp_soft_building/cpp_project_building/Module_2/my_build_dir$ make
// ./calculator (executable)


 
main(){
    float first_no, second_no, result_add, result_div;

    std::cout<<"Enter First Number\t";
    std::cin>> first_no;
    std::cout<<"Enter Second Number\t";
    std::cin>>second_no; 


    result_add = addition(first_no,second_no);
    result_div = division(first_no,second_no);

    print_result("Addition  ", result_add);
    print_result("Division  ", result_div);
}