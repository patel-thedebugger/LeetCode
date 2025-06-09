class Solution {
public:
    string robotWithString(string s) {
        int n = s.length();
        vector<char> minSuffix(n);
        minSuffix[n - 1] = s[n - 1];
        
        // Step 1: Create an array with the minimum character from i to end
        for (int i = n - 2; i >= 0; i--) {
            minSuffix[i] = min(s[i], minSuffix[i + 1]);
        }

        string t = "";  // Stack-like string
        string p = "";  // Final result

        for (int i = 0; i < n; ++i) {
            t.push_back(s[i]);

            // Step 2: Greedily pop from t to p if the top of t is <= min remaining char
            while (!t.empty() && t.back() <= minSuffix[i + 1 == n ? n - 1 : i + 1]) {
                p.push_back(t.back());
                t.pop_back();
            }
        }

        // Step 3: Add remaining characters in t to p
        while (!t.empty()) {
            p.push_back(t.back());
            t.pop_back();
        }

        return p;
    }
};
