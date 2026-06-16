#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x;
    double y;
    cin >> x >> y;
    
    double charge = 0.50;
    double total_needed = x + charge;
    
    // Check if x is multiple of 5 and balance is sufficient
    if (x % 5 == 0 && y >= total_needed) {
        y -= total_needed;
    }
    
    cout << fixed << setprecision(2) << y << "\n";
    
    return 0;
}
