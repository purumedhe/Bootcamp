#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Create a sorted copy of the array
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());
    
    // Create a map: element -> rank (1-indexed)
    map<int, int> rank_map;
    for (int i = 0; i < n; i++) {
        rank_map[sorted_arr[i]] = i + 1;
    }
    
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        cout << rank_map[x] << "\n";
    }
    
    return 0;
}
