class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> arr(36,0);
        int sum = 0 ;
        int x = 1;
        if(n>=10000) x = 10000;
        else if(n>=1000) x = 1000;
        else if(n>=100) x = 100;
        else x = 10;

        for( int j = 1 ; j <= n ; j++ )
        {
            int temp = j ;
            sum = 0 ;
            for( int i = x ; i >= 1 ; i/=10  )
            {
                sum = sum + temp/i ;
                temp  = temp - ((temp/i)*i);
            }
            cout<<sum<<endl;
            arr[sum-1]++;
        }
        cout<<"ans : ";
        sort(arr.begin(),arr.end(), greater<>());
        int max = arr[0];
        int count = 0;
        for( int i = 0 ; i < 36 ; i++)
        {
            if(max == arr[i])
                count++;
            else
                break;
        }
        return count;
    }
};