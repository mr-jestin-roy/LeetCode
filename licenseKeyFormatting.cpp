class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string temp="";
        int j =0;
        for(int i=S.size()-1;i>=0;i--)
        {
            if(S[i]=='-') continue;
            temp+=toupper(S[i]);
            
        }
        
    reverse(temp.begin(),temp.end());
        
        for(int i=temp.size()-K;i>0;i=i-K)
            temp.insert(i,"-");
        return temp;
    }
};