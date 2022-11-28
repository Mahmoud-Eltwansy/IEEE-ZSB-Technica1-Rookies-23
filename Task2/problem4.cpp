#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int value;
    cout << "Please Enter a list of numbers, to stop please enter  -1" << endl;
    while (cin >> value)
    {
        if (value == -1)
            break;

        v.push_back(value);
    }
    int n = v.size(), j = 0;
    vector<int> temp;

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            temp.push_back(v[i]);
            cout << temp[j] << " ";
            j++;
        }
    }
    temp.push_back(v[n - 1]);
    cout << temp[j];
}