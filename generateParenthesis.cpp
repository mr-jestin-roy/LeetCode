class Solution {
public:
    vector<string> result;
    vector<string> generateParenthesis(int n) {
        string S;
        generateString(n,n,S);
        return result;
    }
    
    void generateString(int left,int right,string S){
      if(left ==0 && right ==0 ){
          result.push_back(S);
         
      }
        if(right<left || right<0 || left<0) return;
        

        generateString(left-1,right,S+"(");
        generateString(left,right-1,S+")");
           
        
    }
};