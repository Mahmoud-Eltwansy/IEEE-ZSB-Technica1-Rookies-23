//   Try to think of an unimaginably large number, for instance, Googolplex.
//   as you might notice no numerical data type can hold such a colossal number.
//   the only way is by storing it as an array of digits.
//   write a program to increment such a number by 1

/* Input:
an array of n numbers
** Output:
print the new array*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count, num;
    cin >> count;
    char arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    int n = stoi(arr);
    n += 1;
    string str = to_string(n);
    for (int j = 0; j < str.length(); j++)
    {
        cout << str[j] << " ";
    }
}