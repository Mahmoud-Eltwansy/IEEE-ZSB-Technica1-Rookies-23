// Circular Array Rotation | HackerRank

#include <iostream>
using namespace std;
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    k %= n;
    for (size_t i = 0; i < q; i++)
    {
        int index;
        cin >> index;
        cout << arr[(n - k + index) % n] << endl;
    }
}