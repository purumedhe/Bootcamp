#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    int i = 0, j = (int)s.size() - 1;
    while (i < j) {
        while (i < j && !isalnum((unsigned char)s[i])) ++i;
        while (i < j && !isalnum((unsigned char)s[j])) --j;
        if (tolower((unsigned char)s[i]) != tolower((unsigned char)s[j])) return false;
        ++i; --j;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    if (!getline(cin, s)) return 0;
    cout << (isPalindrome(s) ? "true" : "false") << "\n";
    return 0;
}
