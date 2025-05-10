#include <iostream>
#include "swap.h"

int main(){
    int a = 10;
    int b = 20;
    int* pa = &a;
    int* pb = &b;

    int& ra = a;
    int& rb = b;

    swap(pa, pb);
    // int& c = a;
    // int* pa = &a;
    
    // c = b;
    // *pa = 30;
    // pa = &b;

    // std::cout << " value : [a : " << a << ", c : " << c << "]" << std::endl;
    // std::cout << " address : [a : " << &a << ", c : " << &c << "]" << std::endl;

    // std::cout << " pointer value : [pa : " << *pa << ", b : " << b << "]" << std::endl;
    // std::cout << " pointer address : [pa : " << &pa << ", b : " << &b << "]" << std::endl;
    
    
    std::cout << " swapedvalue : [a : " << a << ", b : " << b << "]" << std::endl;


}