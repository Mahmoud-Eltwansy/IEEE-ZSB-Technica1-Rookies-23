// Find the minimum distance between 2 similar numbers in a list.

// distance means -> the absolute difference between 2 indexes

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int array[] = {2, 5, 3, 4, 5, 2};
    vector<int> minIndex;
    vector<int> index;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int min_Index;

            if (i != j)
            {
                if (array[i] == array[j])
                {
                    min_Index = abs(i - j);
                    minIndex.push_back(min_Index);
                }
            }
        }
    }
    cout << *min_element(minIndex.begin(), minIndex.end()) << endl;
}