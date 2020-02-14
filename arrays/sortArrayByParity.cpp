class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i,j=1,n=A.size();
    for(i=0;i<n;i+=2)
    {
        if(A[i]%2)
        {
            while(A[j]%2)
                j+=2;
            swap(A[i],A[j]);
        }   
    }
    return A;
    }
};