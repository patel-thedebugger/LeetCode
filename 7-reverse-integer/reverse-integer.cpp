class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        cout<<str;
        char temp ;
        int len = str.length();
        int i = 0 ;
        if(str[0] == '-')
        {
            len++;
            i = 1 ;
        }
        for( i ; i < len/2 ; i++)
        {
            temp = str[i];
            str[i] = str[len-i-1];
            str[len-i-1] = temp;
        }
        try{
        return stoi(str);
        }
        catch (const out_of_range& e) {
             return 0 ;//std::cerr << "Out of range: " << e.what() << std::endl;
        }
        return stoi(str);
    }
};