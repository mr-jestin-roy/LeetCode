class Solution {
public:
    vector<string> path;
    vector<vector<string>> ans;
    
    bool isPalindrome(string S){
        
        if(S.size() ==0 || S.size() ==1) return true;
        int start = 0;
        int end = S.size()-1;
        
        while(start<end){
            if(S[start]!=S[end]) return false;
            start++;
            end--;
        }
        
        return true;
        
    }
    
    
    void dfs(string &s,int index,vector<string>& path){
            
        if(index == s.size()){
            ans.push_back(path);
            return;
        }
        
        if (index>s.size())
            return;
        
        for(int i=index;i<s.size();i++){
            string pal = s.substr(index,i-index+1);
            if(isPalindrome(pal)){
                path.push_back(pal);
                dfs(s,i+1,path);
                path.pop_back();
            }
        }
        
    }
    
    
    
    
    vector<vector<string>> partition(string s) {
        
        dfs(s,0,path);
        return ans;
        
        
    }
};