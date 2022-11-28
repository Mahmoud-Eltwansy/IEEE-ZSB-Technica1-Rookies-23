#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str, temp;
    cout << "Please Enter a String " << endl;
    cin >> str;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        temp = temp + str[i];
    }
    if (temp == str)
        cout << "yes";
    else
        cout << "no";
}