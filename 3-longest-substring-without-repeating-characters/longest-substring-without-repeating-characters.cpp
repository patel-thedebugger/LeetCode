class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    if(s.size()==1){
        return 1;
    }
    
    int maxlen = 0 ;
    int len = 0 ;
    int right = 0 ; int  left = 0 ;
    for(int i = right  ; i < s.size() ; i++ )
    {
        
        if(len == 0 )
        {
            len++;
        }
        
        else if(s.substr(left,len).find(s[i]) > len-1)
        {
            //cout<<s.substr(left,len)<<" " << len <<" " << i<< " " << left<<" "<<s[i] <<endl;
            len++;
            if(maxlen<len)
                maxlen = len;
            
        }
        else
        {
           // cout<<"..";
            if(maxlen<len)
                maxlen = len;
            len = 1 ;
                left++;
                i = left;
            //cout<<left<<endl;
        }
    }
    return maxlen;
    }
};