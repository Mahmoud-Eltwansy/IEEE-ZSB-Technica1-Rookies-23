#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    cout << "The Factorial of " << n << " is " << fact;
    return 0;
}