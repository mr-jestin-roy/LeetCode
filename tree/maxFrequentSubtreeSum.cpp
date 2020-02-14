/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    unordered_map<int,int> frequent;
    vector<int> most_frequent;
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        
        if(!root) return most_frequent;
        int sum = subtreeSum(root);
        max_frequent();
        return most_frequent;
    }
   
    int subtreeSum(TreeNode* root)
    {
        if(!root) return 0;
        
        int sum = root->val;
        sum += subtreeSum(root->left);
        sum += subtreeSum(root->right);
        
        if(frequent.count(sum) == 0)
            frequent.insert(pair<int,int>(sum,1));
        else
            frequent[sum] += 1;   
        return sum;
    }
    
    void max_frequent(){
        int max_count = 0, res = -1; 
        for (auto i : frequent) { 
            if (max_count < i.second) { 
                res = i.first; 
                max_count = i.second; 
            }
        } 
        most_frequent.push_back(res);
        for(auto i:frequent){
            if(i.second == max_count)
            {
                if(i.first!= res)
                    most_frequent.push_back(i.first);
            }
                
        }
    }
    
};