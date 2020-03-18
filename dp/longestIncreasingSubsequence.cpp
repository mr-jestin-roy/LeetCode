class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> dp(nums.size(),1);
        if(nums.size() == 0) return 0;
        ls(nums,dp);
        
        return *max_element(dp.begin(), dp.end());
        
    }
    
    void ls(vector<int>&nums,vector<int>& dp){
        int maxlength;
        for(int i=1;i<nums.size();i++){
            maxlength =0;
         for(int j=0;j<i;j++){
                if(nums[i]>nums[j])
                {   if(maxlength<dp[j])
                    maxlength = dp[j];
                }
            }
             dp[i]+=maxlength;
        }
    }
};