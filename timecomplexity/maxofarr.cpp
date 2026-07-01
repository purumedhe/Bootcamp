#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {3, 1, 9, 2, 7, 5};
    int m = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum element in the array is: " << *max_element(arr, arr + n) << endl;
    for (int i = 0; i < n; i++) {
        if(arr[i]>arr[m]){
            m=i;
        }
    }
    cout << "maximum element: " << arr[m] << endl;
    return 0;
}