// print all prime factors of a given integer

#include <iostream>
using namespace std;
void primeFactors(int n)
{
    for (int i = 2; n > 1; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    primeFactors(n);
}