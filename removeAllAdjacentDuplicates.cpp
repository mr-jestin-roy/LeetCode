class Solution {
public:
    string removeDuplicates(string S) {
        
        vector<char> stack;
        for(int i=0;i<S.length();i++)
        {
            if ((stack.size()!=0)&&(stack.back()==S[i]))
            {
              stack.pop_back();
                
            }
            else{
                stack.push_back(S[i]);
            }
        }
        string st(stack.begin(),stack.end());
        return st;
    }
};