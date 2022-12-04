//  Write a program to return the k most frequent elements of an array of n integers.
//   You may return the answer in any order.
/* Input: 
** first line contains 2 space separated integers n and k.
** Second line contains n space separated integers */


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    unordered_map<int, int> m;
    priority_queue<pair<int, int>> q;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        m[num]++;
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        q.push({it->second, it->first});
    }
    while (k != 0)
    {
        cout << q.top().second << " ";
        q.pop();
        k--;
    }
}
