#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int low = 0, mid = 0, high = n - 1;
    
    // Dutch National Flag Algorithm
    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else { // nums[mid] == 2
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    
    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << nums[i];
        if (i < n - 1) cout << " ";
    }
    cout << "\n";
    
    return 0;
}
