class NumArray {
public:
    vector<int> arraySum = {0};
    NumArray(vector<int>& nums) {
        
        
        for(int i =0;i<nums.size();i++){
            arraySum.push_back(nums[i] + arraySum.back());
        }
        
        
    }
    
    int sumRange(int i, int j) {
        return arraySum[j+1]-arraySum[i]; 
            }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */