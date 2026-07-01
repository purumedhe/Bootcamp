#include <iostream>
using namespace std;


int binarysearch(int arr[], int n, int t) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoids potential overflow
        if (arr[mid] == t) {
            return mid;
        } else if (arr[mid] < t) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // -1 means element not found
}

int main() {
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int t = 1; 
    int result = -1;
    
    
    result = binarysearch(arr, 4, t);
    
    if (result == -1) {
        
        int second_half_result = binarysearch(arr + 4, 3, t);
        
        if (second_half_result != -1) {
            result = second_half_result + 4;
        }
    }
    
    if (result != -1) {
        cout << "the index of the target element is: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}