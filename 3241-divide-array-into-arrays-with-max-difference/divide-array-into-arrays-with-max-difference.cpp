class Solution {
public:
    int check(vector<int> group , int k )
    {
         return (abs(group[0] - group[1]) <= k &&
                abs(group[0] - group[2]) <= k &&
                abs(group[1] - group[2]) <= k);
    }
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> arr ;
        sort(nums.begin(), nums.end());
        for( int i = 0 ; i < nums.size() ; i+=3 )
        {
            vector<int> group = {nums[i], nums[i+1], nums[i+2]};
            if (!check(group, k))
                return {};
            arr.push_back(group);
            // arr.push_back(vector<int>(begin(nums) + i, begin(nums)+i+3));
            // if(check(arr,i/3,k))
            //     continue;
            // else{
            //     return {};
            // }
    
        }
        
        return arr;
    }
};