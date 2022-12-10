// ACM ICPC Team | HackerRank

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> v;
int main()
{
    int n, m;
    cin >> n >> m;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        v.push_back(str);
    }
    int ans = 0;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int val = 0;
            for (int k = 0; k < m; k++)
            {
                if (v[i][k] == '1' || v[j][k] == '1')
                    val++;
            }
            if (ans < val)
            {
                ans = val;
                count = 1;
            }
            else if (ans == val)
            {
                count++;
            }
        }
    }
    cout << ans << endl
         << count << endl;
    return 0;
}