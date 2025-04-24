// 根据CMakeLists中的写的add_subdirectory添加的子文件夹，这里使用的时add/add.h头文件
// #include "add.h"

// 如果已经把静态库直接复制到了本节的指路径lib文件夹下，可以不写头文件，直接把用到的add函数声明写出来也可以
// int add(int x, int y);

// 如果是需要将这个静态库打包给其他人使用，别人也不知道你这个静态库中的包含的函数有哪些，还是需要给出使用的头文件，清晰一些知道都用到的函数有哪些
#include "./lib/add.h"

int main() {
    int c = add(1, 3);
    return 0;
}