// N = 5
// Arr = {1, 1, 1, 1, 1}
// X = 1
// Output:
// 5
// Explanation: Frequency of 1 is 5.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 1, 1, 189};
    int len = sizeof(arr) / sizeof(arr[0]);
    int x;
    int count = 0;
    cin >> x;
    for (int i = 0; i < len; i++)
    {
        if (x == arr[i])
            count++;
    }
    cout << "frequency is " << count;
    return 0;
}