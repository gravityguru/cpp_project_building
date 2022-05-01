#include <iostream>
float addition (float n1, float n2){return n1+n2};
float division (float n1, float n2){return n1/n2};
void print_result(std::string result_type, float result_value){
    std::cout<<result_type<<"result is: \t"<result_value<<std::endl;
}

main(){
    float first_no, second_no, result_add, result_div;

    std::cout<<"Enter First Number\t";
    std::cin>> first_no;
    std::cout<<"Enter Second Number\t";
    std::cin>>second_no; 


    result_add = first_no + second_no;
    result_div = first_no / second_no;

    std::cout<<"Addition is\t "<< result_add<<std::endl;
    std::cout<<"Division is\t "<< result_div<<std::endl;
}