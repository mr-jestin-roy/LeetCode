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
    vector<string> paths;
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        string path="";
        dfs(root,path);
        return paths;
    }
    
    void dfs(TreeNode* root,string path)
    {
        if(root==NULL) return;
        if(root->left == NULL&& root->right==NULL)
            {  
                path += to_string(root->val);
                paths.push_back(path);
                return;}
        path += to_string(root->val)+"->" ;
        dfs(root->left,path);
        dfs(root->right,path);
    }
};