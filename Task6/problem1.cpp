// Find Digits | HackerRank

#include <iostream>
using namespace std;
int no_of_divisors(int n)
{
    int temp = n, count = 0;
    while (temp >= 1)
    {
        while (temp % 10 == 0) // while loop >> In the case of the presence of more than zero behind each other
            temp /= 10;

        if (n % (temp % 10) == 0)
        {
            count++;
            temp = temp / 10;
        }
        else
            temp = temp / 10;
    }
    return count;
}
int main()
{
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < x; j++)
    {
        cout << no_of_divisors(arr[j]) << endl;
    }
    return 0;
}