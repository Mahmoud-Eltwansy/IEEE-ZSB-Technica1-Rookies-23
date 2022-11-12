#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n, i = 0;
    string temp;
    cin >> n;
    string str = to_string(n);
    temp = str;
    reverse(str.begin(), str.end());
    while (str[i] == '0')
    {
        i++;
        str.erase(0, i);
    }

    cout << str << endl;
    if (temp == str)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}