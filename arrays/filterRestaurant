class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<int> result;
        vector<vector<int>> res1;
        for(int i=0;i<restaurants.size();i++){
            if((veganFriendly==1&& restaurants[i][2]==0 ) || restaurants[i][3]> maxPrice || restaurants[i][4]>maxDistance)
                continue;
            res1.push_back(restaurants[i]);
        }
        set<pair<int,int>> temp;
           for(int i = 0; i < res1.size(); i++) temp.insert(pair<int, int>(res1[i][1], res1[i][0]));
        for(set<pair<int,int>>::reverse_iterator it = temp.rbegin(); it != temp.rend(); it++) result.push_back(it->second);
        return result;
        
    
        
    }
};