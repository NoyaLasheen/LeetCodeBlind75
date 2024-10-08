class Solution {
public:
    string makeSmallestPalindrome(string s) {
        
        int n = s.length();
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1]) {
                if (s[i] > s[n - i - 1]) {
                    s[i] = s[n - i - 1];
                } else {
                    s[n - i - 1] = s[i];
                }
            }
        }
        return s;
    }
};