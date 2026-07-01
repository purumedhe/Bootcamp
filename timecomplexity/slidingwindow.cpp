#include <iostream>
#include <vector>
#include <algorithm> // For max()

using namespace std;

int maxSumSubarray(const vector<int>& arr, int k) {
    int n = arr.size();
    
    // Edge case: If the array has fewer elements than k
    if (n < k) {
        return -1; 
    }

    int windowSum = 0;
    
    // 1. Compute the sum of the first window of size k
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // 2. Slide the window across the rest of the array
    for (int i = k; i < n; i++) {
        // Add the incoming element, subtract the outgoing element
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;

    int result = maxSumSubarray(arr, k);
    cout << "Maximum sum of a contiguous subarray of size k: " << result << endl;

    return 0;
}