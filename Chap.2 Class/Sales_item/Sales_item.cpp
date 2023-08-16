#include "Sales_item.h"

#include <iostream>
using namespace std;

int main()
{
    Sales_item book;
    cin >> book;
    cout << book << endl;

    Sales_item book2;
    cin >> book2;
    cout << book2 << endl;

    if (book.isbn == book2.isbn)
    {
        cout << book + book2 << endl;
        return 0;
    }
    else
    {
        // cerr 和 cout 都是 C++ 中的 ostream
        // 类的对象，分别用于将错误消息和普通输出发送到标准错误流（stderr）和标准输出流（stdout）。它们都在 <iostream>
        // 头文件中定义。
        // 这两个对象的主要区别在于它们所关联的流不同。cerr 对象与标准 C 错误输出流 stderr 相关联，用于输出错误消息。而
        // cout 对象与标准 C 输出流 stdout 相关联，用于输出普通信息。 此外，cerr 和 cout
        // 的另一个区别在于它们的缓冲方式不同。默认情况下，发送到 cerr 的任何输出都会立即刷新到操作系统，而发送到 cout
        // 的输出则会被缓存起来，直到缓冲区满或者被显式刷新时才会被发送到操作系统。
        cerr << "Error!!";
        return -1;
    }
}
