class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector<int> i_s;
        vector<int> j_s;
        
        for(int i = 0 ; i < matrix.size() ; i++ )
        {
            for(int j = 0 ; j < matrix[i].size() ; j++ )
            {
                if(matrix[i][j] == 0)
                {
                    cout<<i<<" "<<j<<endl;
                    auto pos = find(i_s.begin(), i_s.end(), i);
                    if(pos == i_s.end())
                        i_s.insert(i_s.end(),i);
                    pos = find(j_s.begin(), j_s.end(), j);
                    if(pos == j_s.end())
                        j_s.insert(j_s.end(),j);
                }cout<<j<<" ";
            }
        }
        for( int i = 0 ; i < i_s.size() ; i++ )
        {
            for(int j = 0 ; j < matrix[i].size() ; j++ )
            {
                matrix[i_s[i]][j] = 0 ;
            }
        }
        for( int i = 0 ; i < j_s.size() ; i++ )
        {
            for(int j = 0 ; j < matrix.size() ; j++ )
            {
                matrix[j][j_s[i]] = 0 ;
            }
        }
        
        for( int i = 0 ; i < i_s.size() ; i++ )
        {
            cout<<i_s[i]<<" ";
        }
        cout<<endl;
        for( int i = 0 ; i < j_s.size() ; i++ )
        {
            cout<<j_s[i]<<" ";
        }
    }
};