class Solution {
public:
    string intToRoman(int num) {
        //hi
        string ans ="";
        int t;
        string ch = "";
        for(int i = 1000 ; i >= 1 ; i/=10)
        {
            t = num/i;
            num=num-t*i;
            if(i==1000)
                ch = "M__";
            else if(i==100)
                ch = "CDM";
            else if(i==10)
                ch = "XLC";
            else
                ch = "IVX";
            switch(t)
            {
                case 1 : ans+=ch[0];break;
                case 2 : ans+=ch[0];ans+=ch[0];break;
                case 3 : ans+=ch[0];ans+=ch[0];ans+=ch[0];break;
                case 4 : ans+=ch[0];ans+=ch[1];break;
                case 5 : ans+=ch[1];break;
                case 6 : ans+=ch[1];ans+=ch[0];break;
                case 7 : ans+=ch[1];ans+=ch[0];ans+=ch[0];break;
                case 8 : ans+=ch[1];ans+=ch[0];ans+=ch[0];ans+=ch[0];break;
                case 9 : ans+=ch[0];ans+=ch[2];break;
            }
        }
        return ans ;
    }
};