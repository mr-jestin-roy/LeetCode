class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        
        int S=0;
        for(int i :A)
            if(i%2 ==0) S+=i;
        
        vector<int> ans;
        for(int i =0;i<queries.size();i++)
        {
            int val = queries[i][0];
            int index=queries[i][1];
            if(A[index]%2 ==0) S-=A[index];
            A[index]+=val;
            if(A[index]%2 == 0) S+=A[index];
            ans.push_back(S);
        }
        
        
        return ans;
    }
};