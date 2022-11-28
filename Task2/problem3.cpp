#include <iostream>
#include <string>
using namespace std;
bool is_subSeq(string str, string test)
{
    int num1 = str.size();
    int num2 = test.size();
    if (num2 < num1)
        return false;
    else
    {
        int i = 0, j = 0;
        while ((i < num1) && (j < num2))
        {
            if (str[i] == test[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return i == num1;
    }
}
int main()
{
    string test, str = "hello";
    cout << "Please Enter a String" << endl;
    cin >> test;
    if (is_subSeq(str, test))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
