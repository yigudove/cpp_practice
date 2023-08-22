#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> intVec;

    string str = "1,3,5,2,4";
    // cin >> str;

    vector<int> runes;

    while (string::npos != str.find(","))
    {
        runes.push_back(stoi(str.substr(0, str.find(","))));
        str = str.substr(str.find(",") + 1, str.length() - 1);
    }
    runes.push_back(stoi(str));

    sort(begin(runes), end(runes));

    for (int elem : runes)
    {
        cout << elem << " ";
    }


    return 0;
}
