// N = 5
// a[] = {2,3,1,2,3}
// Output: 
// 2 3 
// Explanation: 
// 2 and 3 occur more than once in the given array.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 2, 1, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    int a[5]; // Use len as the size of a[], not a fixed size like 5
    int k = 0;
    
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) { // Fixed the loop condition here
            if (arr[i] == arr[j]) {
                a[k++] = arr[i];
                break; // Added a break to avoid duplicate entries in a[]
            }
        }
    }
    
    for (int i = 0; i < k; i++) { // Use k as the limit for output
        cout << a[i] << " ";
    }
    
    return 0;
}
