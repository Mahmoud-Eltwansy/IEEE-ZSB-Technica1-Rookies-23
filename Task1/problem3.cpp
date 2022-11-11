#include <iostream>
using namespace std;
int sum_rec(int arr[], int n)
{
    if (n <= 0)
        return 0;
    return (arr[n - 1] + sum_rec(arr, n - 1));
}
int main()
{
    int n, sum_for = 0, sum_while = 0, i = 0;
    cout << "Please Enter the size of the list" << endl;
    cin >> n;
    int arr[n];
    cout << "Please Enter the numbers of the list" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum_for += arr[i];
    }
    cout << sum_for << endl;
    while ((i - 1) >= 0)
    {
        sum_while += arr[i - 1];
        i--;
    }
    cout << sum_while << endl;

    cout << sum_rec(arr, n);

    return 0;
}