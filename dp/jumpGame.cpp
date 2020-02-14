class Solution {
public:
    int memo[100000];
    int d;
    
    int dp(vector<int>&arr,int index){
        if(memo[index]!=-1)
            return memo[index];
        
        memo[index] =0;
        for(int i = index+1;i<arr.size() && arr[i]<arr[index] && i<=index+d;i++)
            memo[index] = max(memo[index],1+dp(arr,i));
        for(int i = index-1;i>=0 && arr[i]<arr[index] && i>=index-d;i--)
            memo[index] = max(memo[index],1+ dp(arr,i));
        
        return memo[index];
    }
    
    
    int maxJumps(vector<int>& arr, int d) {
        memset(memo,-1,sizeof memo);
        int result = 0;
        this->d = d;
        for(int i=0;i<arr.size();i++)
        {
            result = max(result,1+dp(arr,i));
            
        }
        return result;
    }
};