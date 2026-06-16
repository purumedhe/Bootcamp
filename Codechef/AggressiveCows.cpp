#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Check if we can place k cows with at least minDist distance apart
bool canPlaceCows(vector<int>& stalls, int k, int minDist) {
    int count = 1;
    int lastPosition = stalls[0];
    
    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPosition >= minDist) {
            count++;
            lastPosition = stalls[i];
            if (count == k) return true;
        }
    }
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        
        sort(stalls.begin(), stalls.end());
        
        int left = 1;
        int right = stalls[n - 1] - stalls[0];
        int answer = 0;
        
        // Binary search on the answer
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (canPlaceCows(stalls, k, mid)) {
                answer = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        cout << answer << "\n";
    }
    
    return 0;
}
