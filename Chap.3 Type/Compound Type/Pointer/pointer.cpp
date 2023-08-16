// 在 C++ 中，& 符号有两种不同的用途。
// 它可以用于定义引用类型，也可以用于获取变量的内存地址。

// 在 C++ 中，* 符号有两种不同的用途。它可以用于定义指针类型，也可以用作解引用操作符。
// 当 * 用于定义指针类型时，它表示该变量是一个指针类型，它存储的是另一个变量的内存地址。例如，int *p; 定义了一个名为 p
// 的指针类型，它存储的是一个整型变量的内存地址。 当 *
// 用作解引用操作符时，它表示访问指针指向的内存空间。例如，如果我们执行语句 int x = *p;，那么会将 p
// 指向的内存空间中的值赋给变量 x。
int ival = 42;
int* p   = &ival;
int* p2  = p;