class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> matrix;
        
        for(int i = 1 ; i <= numRows ; i++)
        {
            vector<int> row(i);
            for(int j = 0 ; j < i ; j++)
            {
                if(j == 0 || j == i -1)
                {
                    row[j] = 1 ;
                    continue ;
                }
                row[j] = matrix[i-2][j-1] + matrix[i-2][j] ;
            }
            matrix.push_back(row);
        }
        return matrix ;
    }
};