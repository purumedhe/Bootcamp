#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int result = 0;
        for (int i = 0; i < n; i++) {
            int doll_type;
            cin >> doll_type;
            result ^= doll_type;
        }
        
        cout << result << "\n";
    }
    
    return 0;
}
