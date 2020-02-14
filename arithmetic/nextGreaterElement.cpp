class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         unordered_map<int, int> max;
         vector<int> stack;
         
        for(int num:nums2)
        {
            while((stack.size()!=0) && (stack.back()<num))
            {
                max[stack.back()]=num;stack.pop_back();}
            stack.push_back(num);
        }
        
        for(int i=0;i<nums1.size();i++)
            if(max[nums1[i]]!=NULL)
                nums1[i]=max[nums1[i]];
            else
                nums1[i]=-1;
        
  
        return nums1;
    }
};