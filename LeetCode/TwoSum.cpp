#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, target;
    cin >> n >> target;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    unordered_map<int, int> seen;
    
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        
        // Check if complement exists in map
        if (seen.find(complement) != seen.end()) {
            cout << seen[complement] << " " << i << "\n";
            return 0;
        }
        
        // Add current number to map
        seen[nums[i]] = i;
    }
    
    return 0;
}
