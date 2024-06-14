// /tmp/NzYIhKmEYu.o
// 41 34 10 21 3 15
// second largest element is 34
// second smallest element is 3

// === Code Execution Successful ===

// Write a Program to Find the Second Smallest Element in an Array
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[] = {21, 3, 15, 41, 34, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len; j++)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "second largest element is " << arr[1] << endl;
    cout << "second smallest element is " << arr[len - 2];
    return 0;
}