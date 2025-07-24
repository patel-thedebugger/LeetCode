class Solution
{
    public:
int gain(string& s, string pattern, int value) {
        stack<char> st;
        int score = 0;

        for (char c : s) {
            if (!st.empty() && st.top() == pattern[0] && c == pattern[1]) {
                st.pop(); // remove pattern[0]
                score += value;
            } else {
                st.push(c);
            }
        }

        // rebuild the remaining string
        s = "";
        while (!st.empty()) {
            s += st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());

        return score;
    }

    int maximumGain(string s, int x, int y) {
        int result = 0;
        if (x > y) {
            result += gain(s, "ab", x);
            result += gain(s, "ba", y);
        } else {
            result += gain(s, "ba", y);
            result += gain(s, "ab", x);
        }
        return result;
    }
};