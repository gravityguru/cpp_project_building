#include <iostream>
#include "addition.h"
#include "division.h"
#include "print_result.h"

// Run in terminal 
//g++ main.cpp addition.cpp division.cpp print_result.cpp -o calculator
// Dummy comment


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