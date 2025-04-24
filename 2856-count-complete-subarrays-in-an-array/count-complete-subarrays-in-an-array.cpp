class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
    int total = 0;
    int n = nums.size();

    // Find the number of distinct elements in the whole array
    unordered_set<int> unique_elements(nums.begin(), nums.end());
    int total_distinct = unique_elements.size();

    // Loop through each possible starting point
    for (int i = 0; i < n; ++i) {
        unordered_map<int, int> freq;
        int distinct_count = 0;

        // Extend the subarray from i to the right
        for (int j = i; j < n; ++j) {
            if (++freq[nums[j]] == 1) {
                ++distinct_count;
            }

            if (distinct_count == total_distinct) {
                ++total;
            }
        }
    }

    return total;
}
};