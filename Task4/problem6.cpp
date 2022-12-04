// You are given a number that contains 4 digits with at least two distinct digits.
// Your program should perform the following routine on the number:
// Arrange the digits in descending order
// and in ascending order (adding zeros to fit it to a 4-digit number),
// and subtract the smaller number from the bigger number.
// Then repeat the previous step. Performing this routine
// will always cause you to reach a fixed number: 6174.
// Your program should return the number of times this routine must be performed until 6174 is reached.
// For example, if num is 3524 your program should return 3 because of the following

// steps:
// (1) 5432 - 2345 = 3087
// (2) 8730 - 0378 = 8352
// (3) 8532 - 2358 = 6174

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
    sort(arr, arr + 4);
    int numAsc = (arr[0] * 1000) + (arr[1] * 100) + (arr[2] * 10) + arr[3];
    int numDsc = (arr[3] * 1000) + (arr[2] * 100) + (arr[1] * 10) + arr[0];
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