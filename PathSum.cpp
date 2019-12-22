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
    private :
    int s = 0;
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return false;
        sum -= root->val;
        if(root->left ==NULL && root->right ==NULL && sum ==s) return true;
        return hasPathSum(root->left,sum) || hasPathSum(root->right,sum);
        
        
    }
};