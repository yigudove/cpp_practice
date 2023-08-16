#include <iostream>
using namespace std;

int main()
{
    int i    = 1;
    int& ref = i;
    // int &ref =1 error 引用类型初始值必须为对象，而不能为字面值常量（literal）
    // 重要：引用不是一个新的对象，引用只是已有对象的一个别名
    i += 1;
    cout << (ref) << endl;
    return 0;
}
