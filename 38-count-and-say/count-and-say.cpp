class Solution {
public:
    string update(string s)
    {
        
        string ans = "";
        int count ;
        int j;
        if(s.length() == 0)
            return "1";
        else
        {
            for(int i = 0 ; i < s.length() ; i++ )
            {
                count=1;
                for(j = i+1 ; j < s.length() ; j++)
                {
                    if(s[i] == s[j])
                        count++;
                    else
                        break;
                }
                ans+=to_string(count);
                ans+=s[i];
                i=j-1;
            }
        }
        return ans ;
    }
    string countAndSay(int n) {
        string s = "";
        for( int i = 1 ; i <= n ; i++ )
        {
            s = update(s);
        }
        return s ;
    }
};