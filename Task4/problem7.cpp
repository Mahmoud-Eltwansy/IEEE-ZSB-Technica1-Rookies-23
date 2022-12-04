// group the anagrams together of an array of strings.
// You can return the answer in any order.

#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
int main()
{
    map<string, vector<string>> mp;
    string temp;
    vector<string> strs;
    vector<vector<string>> res;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        strs.push_back(str);
    }
    int size = strs.size();
    for (int i = 0; i < size; i++)
    {
        temp = strs[i];
        sort(strs[i].begin(), strs[i].end());
        mp[strs[i]].push_back(temp);
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
        res.push_back(it->second);

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
