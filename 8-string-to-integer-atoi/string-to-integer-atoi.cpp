class Solution {
public:
    int myAtoi(string s) {
        string res ="" ;
        string x ;
        for( int i = 0 ; i < s.length() ; i++ )
        {
            if (s[i] == ' ')
            {
                if(res.length() == 0)
                    continue;
                else
                    break;
            }
            else if((s[i]>='0' && s[i]<='9' ) || (s[i] == '-') || (s[i] == '+'))
            {
                
                x = s[i];
                res.append(x);
            }
            else
                break;
        }
        if(res == "")
            return 0;
        try
        {
            return  stoi(res);
        } catch (const std::invalid_argument& e) {
        return 0;
    } catch (const std::out_of_range& e) {
        if(res[0] == '-')
            return -2147483648;
        else
            return 2147483647;
    }
        
    }
};