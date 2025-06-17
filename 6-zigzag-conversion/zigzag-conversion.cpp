class Solution {
public:
    string convert(string s, int numRows) {
        string res = string(s.length() , ' ');
        int j = 0 ;
        if(numRows == 1)
            return s ;
        int num = numRows + numRows - 2 ;
        for( int i = 0 ; i < numRows ; i++ )
        {
            for(int k = i ; k < s.length() ; )
            {
                if(j >= s.length() )
                    break;
                res[j++] = s[k];
                if((k+num-i*2) >= s.length())
                    break;
                if(i != 0 && i != numRows - 1  )
                    res[j++] = s[k + num - i*2 ];
                k += num ;

                cout<<i<<" "<<res<<endl;
            }
            
            
        }

        return res;
    }
};