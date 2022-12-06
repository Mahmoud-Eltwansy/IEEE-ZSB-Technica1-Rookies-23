// 7beshi and Zarzor are playing a game. The rules are simple 7beshi will give Zarzor a positive integer,
// arzor is going to add the square of its digits, then take the resulting number and repeat the process till he gets to 1.
// Only then Zarzor will win the game. Otherwise, he will enter an infinite loop and thus die trying.
// Write a program to check if a number will ever get to 1, if not warn Zarzor beforehand.
// Save Zarzor's life. He's a good guy 😢

#include <iostream>
using namespace std;
int zarzorHelper(int n)
{
    int rem = 0, sum = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum += rem * rem;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n, result;
    cin >> n;
    result = n;

    while (result != 1 && result != 4)
    {
        result = zarzorHelper(result);
    }
    if (result == 1)
        cout << "true";
    else
        cout << "false";
}