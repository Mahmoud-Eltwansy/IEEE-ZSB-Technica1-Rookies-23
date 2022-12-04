//  Write a program that asks the user for two strings, s1 and s2,
//  and tests whether s2 contains a permutation of s1.
//  returns true if it satisfies the condition, returns false otherwise

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int Kaprekar(int num, int count)
{
    if (num == 0)
        return 0;
    int arr[4];
    count++;
    string str = to_string(num);
    if (str.length() < 4)
        str.insert(0, "0");
    num = stoi(str);
    for (int i = 0; i < 4; i++)
    {
        arr[i] = num % 10;
        num = num / 10;
    }
    int numAsc = (arr[3] * 1000) + (arr[2] * 100) + (arr[1] * 10) + arr[0];
    int numDsc = (arr[0] * 1000) + (arr[1] * 100) + (arr[2] * 10) + arr[3];
    int res = abs(numAsc - numDsc);
    if (res == 6174)
        return count;
    else
        return Kaprekar(res, count);
}
int main()
{
    int num;
    cin >> num;
    cout << Kaprekar(num, 0) << endl;
}
