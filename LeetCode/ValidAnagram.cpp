#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t;
    cin >> s >> t;
    
    // If lengths differ, not an anagram
    if (s.length() != t.length()) {
        cout << "false\n";
        return 0;
    }
    
    // Count character frequencies in s
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    
    // Check if characters in t match
    for (char c : t) {
        if (freq.find(c) == freq.end() || freq[c] == 0) {
            cout << "false\n";
            return 0;
        }
        freq[c]--;
    }
    
    cout << "true\n";
    return 0;
}
