class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
         int N = A.size();
         int p =0,n=0;
         
        while(p<N && A[p]<0)
        p++;
        n = p-1;
        
        vector<int> O;
        
        while((p<N)&& (n>=0))
        {
            if(A[n] * A[n] <A[p]*A[p])
            {
                O.push_back(A[n]*A[n]);
                n--;
            }
            else
            {
            O.push_back(A[p]*A[p]);
                p++;
                
            }
            
        }
        
        while(p<N)
        {
            {
            O.push_back(A[p]*A[p]);
                p++;
                
            }
        }
        while(n>=0)
         {
                O.push_back(A[n]*A[n]);
                n--;
            }
        
        return O;
        
        
        
    }
};