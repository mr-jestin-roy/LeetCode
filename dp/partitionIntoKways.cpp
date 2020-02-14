class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        
        if(k==0 || (sum%k!=0))
            return false;
        vector<bool> used(nums.size(),false);
        return canPartition(nums,0,k,used,0,sum/k);
    }
    
    bool canPartition(vector<int>& nums,int index,int k,vector<bool>& used,int bucketSum,int targetSum){
        
        if(k==1)
            return true;
        
        if(bucketSum == targetSum)
        {
            return canPartition(nums,0,k-1,used,0,targetSum);
        }
        
        for(int i=index;i<nums.size();i++){
            if(used[i] == false){
                used[i]== true;
               if(canPartition(nums,i+1,k,used,bucketSum+nums[i],targetSum))
                  return true;
                  
                  used[i] = false;
                  
            }
        }
        return false;
    }
};