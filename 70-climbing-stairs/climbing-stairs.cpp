class Solution {
public:
    long long comb(int n, int k) {
        long long res = 1;
        for (int i = 1; i <= k; ++i) {
            res *= n - i + 1;
            res /= i;
        }
        return res;
    }

    int climbStairs(int n) {
        int count = 0;
        for (int i = 0; i <= n / 2; ++i) {
            count += comb(n - i, i);
        }
        return count;
    }
};