class Solution {
public:

    int maxProfit(vector<int>& prices) {
        /* vector<int> s = prices ;
        sort(s.begin(),s.end());
        int len = s.size();
        for( int i = 0 ; i < len ; i++)
        {
            auto it = find(prices.begin(),prices.end(),s[i]);
            int min = distance(prices.begin(),it);

            for( int j = len-1 ; j >= i ; j--)
            {
                auto it1 = find(prices.begin(),prices.end(),s[j]);
                int max = distance(prices.begin(),it1);
                cout<<max<<" "<<min<<endl;
                if(max > min){
                    int profit = prices[max] - prices[min];
                    if(profit > 0)
                        return profit;
                }
            }
        }
        return 0; */
        int min = INT_MAX;
        int profit = 0 ;
        for( int i = 0  ; i < prices.size() ; i++)
        {
            if(prices[i] < min)
                min = prices[i];
            if(profit < prices[i] - min)
                profit = prices[i] - min;
        }
        return profit ;
    }
};