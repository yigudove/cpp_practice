#include <iostream>
using namespace std;
int main()
{
    unsigned int i = -1;
    // 在 32 位系统中，unsigned int 类型能够表示的最大值为 2^32-1 = 4294967295
    cout << UINT_MAX << endl;
    // 由于 -1 是一个负整数，它会被转换为无符号整数的等效值。
    cout << i << endl;

    unsigned int x = 3;
    unsigned int y = 5;
    unsigned int z = x - y;
    cout << z << endl; // 输出 UINT_MAX-2

    // unsigned variable 永远不小于零, 故下面循环导致死循环
    for (unsigned u = 10; u >= 0; --u)
    {
        break;
    }

    return 0;
}
