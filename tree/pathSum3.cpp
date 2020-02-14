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
    
     int count = 0;
     int S;
public:
    int pathSum(TreeNode* root, int sum) {
     S=sum;
     traverse(root);
        return count;
        
    }
    
    void traverse(TreeNode* root)
    {
        if(!root ) return;
        hasPathSum(root,S);
        traverse(root->left);
        traverse(root->right);
    }
    
    void hasPathSum(TreeNode* root, int sum)
    {
        if(root==NULL) return;
        if(sum-root->val==0) count++;
        hasPathSum(root->left,sum-root->val);
        hasPathSum(root->right,sum-root->val);
    }
    
};
