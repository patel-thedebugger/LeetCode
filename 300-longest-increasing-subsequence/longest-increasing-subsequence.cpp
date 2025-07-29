class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> x(nums.size(),1);
        for ( int i = 0 ; i < nums.size() ; i++ )
        {
            for( int j = 0 ; j < i ; j++)
            {
                if(nums[j] < nums[i])
                {
                    if(x[j] + 1 > x[i])
                    {
                            x[i] = x[j]+1 ;
                    }
                }
            }
        }
        auto it  = max_element(x.begin(), x.end());
        return *it ;
    }
};