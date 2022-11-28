
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 1, 19, 4};
    int N = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, N);
    printArray(arr, N);

    return 0;
}
// Sorting Mechanism

/* The algorithm for using insertion sort to put an array in ascending order is as follows:
1-Beginning with arr[1] and ending with arr[n].
2-Compare the current element (key) to the element present and its predecessor.
    Here, at first execution, the current element will be at arr[1] (the second element from the array).
    At the second execution, the current element will be at arr[2] (the third element from the array).
    and so on.
3-If the current element is smaller than its predecessor,
4-Then compare it to the elements present before the index of the current element.
5-Move the greater elements one index up to create space for the swapped element.
*/

// Seperator

// Time and Space Complexity.

/*Time Complexity is : O(n^2) for worst case and average case.
  and for best case is : O(n).

  Space Complexity is : O(1).

*/

// Seperator

// what does a Stable sorting Alogrithm mean , and is the insertion sorting stable ?

/*A stable sorting algorithm is the one that sorts the identical elements
 in their same order as they appear in the input, While unstable sorting may not satisfy the case,

 and the insertion sort is satisfy the case >> Stable Sorting Algorithm.
*/