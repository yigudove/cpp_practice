#include <iostream>
using namespace std;

int main()
{
    string str = "123.";
    str.empty();
    str.size();
    str.length();

    // 1. 子串
    str.substr(0, str.find(".")); // return 123

    // 2. 转int stoi = atoi(str.c_str())
    stoi(str.substr(0, str.find(".")));
    atoi((str.substr(0, str.find("."))).c_str());

    // 3. find 没有找到匹配项 string::nops返回 string 类size_t
    cout << str.find("a") << "  " << string::npos << endl;
    if (string::npos != str.find("a"))
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "true" << endl;
    }

    // 4. 访问字符串中字符的方法
    str[1];
    try
    {
        str.at(6); // 可以抛出异常，不越界
    }
    catch (out_of_range& e)
    {
        cerr << "str.at out of range" << e.what() << endl;
    }

    // 5. 插入 删除
    str.insert(1, "4"); // insert(pos, argus) argus 会放在 pos
    cout << str << endl;
    str.erase(1);
    cout << str << endl;

    return 0;
}
