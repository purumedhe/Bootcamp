#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Passing by reference (&) prevents the program from making an expensive copy of the data
int maximumToys(vector<int>& prices, int k) {
    // Sort the prices in ascending order
    sort(prices.begin(), prices.end());
    
    int toyCount = 0;
    
    for (int price : prices) {
        if (k >= price) {
            k -= price; 
            toyCount++; 
        } else {
            // Since it's sorted, no other toy will fit the budget
            break; 
        }
    }
    
    return toyCount;
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    if (cin >> n >> k) {
        vector<int> prices(n);
        for (int i = 0; i < n; i++) {
            if (!(cin >> prices[i])) {
                // If input ends early or fails, break out to prevent getting stuck
                break; 
            }
        }
        
        cout << maximumToys(prices, k) << "\n";
    }
    
    return 0;
}