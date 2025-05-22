class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), result.begin());
        sort(result.begin(),result.end());
        int s = result.size();
        int mid = s/2 ;
        if( s%2 == 0)
        {
            return (double)(result[mid-1] + result[mid])/2 ;
        }
        else
            return (double)(result[mid]) ;
            

    }
};