class Solution {
public:
    
    vector<vector<int>> result;
    
    
    
    void generatePermutations(vector<int>& nums,vector<bool>& used,vector<int>& p){
            if(p.size()==nums.size()){
                result.push_back(p);
            return;
            }        
            
            for(int i=0;i<nums.size();i++){
                if(!used[i]){
                    used[i]=true;
                    p.push_back(nums[i]);
                    generatePermutations(nums,used,p);
                    p.pop_back();
                    used[i] = false;
                    
                }
            }
    
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> p;
        vector<bool> used(nums.size(),false);
         generatePermutations(nums,used,p);
        return result;
        
    }
    
};