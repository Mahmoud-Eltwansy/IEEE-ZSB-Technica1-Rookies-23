// HackerRank in a String! | HackerRank

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        string str = "hackerrank";
        int l = 0;
        bool b = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == str[l])
            {
                if (l == 8)
                    b = true;
                else
                    l++;
            }
        }
        if (b == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}