#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout<<"Please Enter a number"<<endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
            sum += i;
        else if (i % 5 == 0 && i % 3 != 0)
            sum += i;
    }
    cout << sum;

    return 0;
}