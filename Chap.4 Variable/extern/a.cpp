// extern int a; // 声明一个全局变量 a
// int a; // 定义一个全局变量 a
// extern int a = 0; // 定义一个全局变量 a 并给初值。
// int a        = 0; // 定义一个全局变量 a, 并给初值

#include <iostream>
using namespace std;

extern int x; // 声明

int main()
{
    int y; // 定义
    y = 10; // 初始化
    cout << y << endl;
    return 0;
}

int x = 5; // 定义和初始化

// 声明：声明是告诉编译器某个实体（如变量、函数等）的存在，但并不分配内存。例如，在上面的代码中，extern int x; 是对变量
// x 的声明。声明通常出现在头文件中，用来告诉编译器这个变量或函数在其他地方定义1。

// 定义：定义是为声明过的实体分配内存，并为其指定初始值（如果有的话）。例如，在上面的代码中，int y; 是对变量 y
// 的定义。定义通常出现在源文件中1。

// 初始化：初始化是在定义变量时为其赋予初始值。例如，在上面的代码中，y = 10; 是对变量
//  y 的初始化。初始化可以在定义时进行，也可以在定义后进行1。
