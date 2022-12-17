#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    for (size_t i = 0; i < testCases; i++)
    {
        int res = 0;
        int n, c, m;
        cin >> n >> c >> m;
        int no_of_bars = n / c;
        int no_of_wrappers = no_of_bars;
        res += no_of_bars;
        while (no_of_wrappers >= m)
        {
            int rem = no_of_wrappers % m;
            no_of_bars = no_of_wrappers / m;
            no_of_wrappers = no_of_bars + rem;
            res += no_of_bars;
        }
        cout << res << endl;
    }
}