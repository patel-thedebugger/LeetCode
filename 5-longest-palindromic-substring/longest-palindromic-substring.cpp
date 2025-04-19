class Solution {
public:
     string expandFromCenter(string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        
        return s.substr(left + 1, right - left - 1);
    }
    string longestPalindrome(string s) {
       if (s.empty()) return "";

        string longest = s.substr(0, 1); // At least one char is a palindrome

        for (int i = 0; i < s.length(); i++) {
            string odd = expandFromCenter(s, i, i);       // Odd-length palindrome
            string even = expandFromCenter(s, i, i + 1);   // Even-length palindrome

            if (odd.length() > longest.length()) longest = odd;
            if (even.length() > longest.length()) longest = even;
        }

        return longest;
    }
};