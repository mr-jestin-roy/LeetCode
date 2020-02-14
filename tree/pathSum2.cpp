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
    private:
     int S;
    vector<vector<int>> out;
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        S=sum;
        vector<int> V={};
        dfs(root,0,V);
        return out;
    }
    
    void dfs(TreeNode* root, int sum, vector<int> path)
    {
        if(root == NULL) return;
        path.push_back(root->val);
        if(root->left == NULL && root->right==NULL && root->val+sum == S) out.push_back(path);
        dfs(root->left, sum+root->val,path);
        dfs(root->right,sum+root->val,path);
        path.pop_back();
    }
};