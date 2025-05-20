class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> diff(n + 1, 0);

        // Apply range updates using difference array
        for (const auto& q : queries) {
            int l = q[0];
            int r = q[1];
            diff[l]++;
            if (r + 1 < n)
                diff[r + 1]--;
        }

        // Apply the accumulated difference to nums
        int dec = 0;
        for (int i = 0; i < n; ++i) {
            dec += diff[i];
            nums[i] -= dec;
            if (nums[i] > 0) return false;
        }

        return true;
    }
};