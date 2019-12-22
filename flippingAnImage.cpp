class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        for(int i=0;i<A.size();i++)
        { 
            int low=0;
            int high = A[i].size()-1;
            while(low<=high)
            {
                if(A[i][low]==A[i][high])
                {
                    A[i][low]=1-A[i][low];
                    A[i][high]=A[i][low];
                }
                low++;
                high--;
                    
            }
        }
        
            return A;
    }
};