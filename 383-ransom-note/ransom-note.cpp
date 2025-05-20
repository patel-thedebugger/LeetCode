class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int pos ;
        int j = 0 ;
        for ( int i = 0 ; i < ransomNote.size() ; i++ )
        {
            sort(ransomNote.begin(),ransomNote.end());
            
            sort(magazine.begin(),magazine.end());
            pos = magazine.find(ransomNote[i], j);
            
            if(pos == -1 )
                return false ;
            else
                j = pos+1 ;
        }
            return true ;
    }
};