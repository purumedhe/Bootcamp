#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void minMaxSum(vector<long long>& arr) {
    long long total = 0;
    for (long long num : arr) {
        total += num;
    }
    
    long long minSum = LLONG_MAX;
    long long maxSum = LLONG_MIN;
    
    // Calculate sum excluding each element
    for (int i = 0; i < 5; i++) {
        long long sum = total - arr[i];
        minSum = min(minSum, sum);
        maxSum = max(maxSum, sum);
    }
    
    cout << minSum << " " << maxSum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<long long> arr(5);
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    minMaxSum(arr);
    
    return 0;
}
