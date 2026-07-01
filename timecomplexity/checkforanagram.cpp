#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {
    // If lengths are different, they cannot be anagrams
    if (s.length() != t.length()) {
        return false;
    }
    
    // Fixed-size frequency array for 26 lowercase letters initialized to 0
    vector<int> count(26, 0);
    
    // Update counts: increment for s, decrement for t
    for (size_t i = 0; i < s.length(); ++i) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    
    // If any bucket is not zero, the strings are not anagrams
    for (int val : count) {
        if (val != 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s = "driver";
    string t = "river";
    
    if (isAnagram(s, t)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}