#include <iostream>

int main(){
    int a = 10;
    int b = 20;

    int * const pa = &a;    //顶层const, 常量指针，表示指针不能改变指向
    // a = &b;  //error

    const int * pb = &b;
    // *pb = 30;

    
}