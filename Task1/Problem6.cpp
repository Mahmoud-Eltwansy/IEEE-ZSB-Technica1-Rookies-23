#include <iostream>
using namespace std;

int main()
{
    float n, m;
    cin >> n;
    cin >> m;

    while (n != m)
    {
        if (n > m)
            n = n - m;
        else
            m = m - n;
    }
    cout << "The gcd is " << n;
    return 0;
}