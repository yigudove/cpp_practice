#include <iostream>
#include <string>
using namespace std;

// when
int main()
{
    int sum = 0, value = 0;
    // NotCustomInput.exe < test.txt
    while (cin >> value)
    {
        if (to_string(value) == "#break")
        {
            break;
        }
        sum += value;
    }
    cout << sum;
    return 0;
}
