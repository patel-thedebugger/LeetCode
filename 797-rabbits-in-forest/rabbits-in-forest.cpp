class Solution {
public:
    int numRabbits(vector<int>& answers) {
        sort(answers.begin() , answers.end());
    int count = 0 ;
    int total = 0 ;
    for( int i = 0 ; i < answers.size() ; i++ )
    {
        int left = lower_bound(answers.begin()+i+1, answers.end(), answers[i]) - answers.begin();
        int right = upper_bound(answers.begin()+i+1, answers.end(), answers[i]) - answers.begin();
        //cout<<right<<" "<<left<<" ";
        count = right-left+1;
        //cout<<count<<"----"<<answers[i]<<endl;
        if(answers[i] == 0 )
        {
            total+=count;
            i = right-1;
            continue;
        }
        if(answers[i] + 1 >= count)
            total+=answers[i]+1;
        else
        {
            total= total + (count/(answers[i]+1))*(answers[i]+1);
            if(count%(answers[i]+1) != 0)
                total = total + answers[i] + 1;
        }
        //cout<<count<<"----"<<answers[i]<<" "<<total<<endl;
        i = right-1 ;
    }
    return total ;
    }
};