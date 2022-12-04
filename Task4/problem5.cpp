// Rotate a 2D-Matrix by 90 degs without any libraries.

// Input:
//  n x n square matrix

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n], temp[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            temp[i][k] = arr[j][i];
            k++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << temp[i][j] << " ";
        cout << endl;
    }
}
