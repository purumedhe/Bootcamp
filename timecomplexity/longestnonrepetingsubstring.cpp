#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm> // For max()

using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> charSet;
    int left = 0;
    int maxLength = 0;
    
    // The right pointer expands the window
    for (int right = 0; right < s.length(); ++right) {
        // If a duplicate is found, shrink the window from the left
        while (charSet.find(s[right]) != charSet.end()) {
            charSet.erase(s[left]);
            left++;
        }
        
        // Insert the current character and update the maximum length
        charSet.insert(s[right]);
        maxLength = max(maxLength, right - left + 1);
    }
    
    return maxLength;
}

int main() {
    string s1 = "abcabcbb";
    string s2 = "kalyan kumar";
    
    cout << "Output 1: " << lengthOfLongestSubstring(s1) << endl; // Outputs 3
    cout << "Output 2: " << lengthOfLongestSubstring(s2) << endl; // Outputs 3
    
    return 0;
}