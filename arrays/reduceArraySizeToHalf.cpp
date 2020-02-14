class Solution {
public:
    int minSetSize(vector<int>& arr) {
       int size = arr.size();
        
        unordered_map<int,int> countMap;
        
        for(int x:arr){
            countMap[x]++;
        }
        
        vector<int> result;
        for(auto it=countMap.begin();it!=countMap.end();it++)
            result.push_back(it->second);
        
        sort(result.begin(),result.end(), greater<int>());
        
        int sum=0,count=0;
        for(int i=0;i<result.size();i++){
            sum+=result[i];
            count++;
            if(sum>=size/2){
                return count;
            }
            
        }
        
        return size;
        
    }
    
    
};