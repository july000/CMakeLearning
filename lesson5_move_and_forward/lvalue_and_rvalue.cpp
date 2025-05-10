#include <iostream>

template<typename T>
constexpr bool is_lvalue(T&& ){
    return std::is_lvalue_reference<T>::value;
}

int main() {
    int x = 10;
    int& ref = x;
    const int& cref = x;

    std::cout << std::boolalpha;
    std::cout << "x is lvalue? " << is_lvalue(x) << std::endl;      // true
    std::cout << "ref is lvalue? " << is_lvalue(ref) << std::endl;  // true
    std::cout << "cref is lvalue? " << is_lvalue(cref) << std::endl;// true
    std::cout << "10 is lvalue? " << is_lvalue(10) << std::endl;    // false

    return 0;
}