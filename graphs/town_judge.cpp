class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        vector<int>judge(N,0);
        
        for(int i=0;i<trust.size();i++)
        {
            judge[trust[i][1]-1]++;
            judge[trust[i][0]-1]--;
            
        }
        
        for(int i=0;i<judge.size();i++)
        {
            if(judge[i]==N-1)
                return i+1;
            
        }
        
        return -1;
        
        
    }
};