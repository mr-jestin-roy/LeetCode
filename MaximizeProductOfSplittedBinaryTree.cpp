/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
static int MOD=1e9+7;
class Solution {
public:
    long long totalTreeSum =0,sum=0;
    
    void TreeSum(TreeNode* root){
        if(root == NULL)
            return ;
        totalTreeSum += root->val;
        TreeSum(root->left);
        TreeSum(root->right);
    }
    
    int sumUnder(TreeNode*root){
        if(root==NULL)
            return 0;
        
        int sumUnderLeft = sumUnder(root->left);
        int sumUnderRight = sumUnder(root->right);
        
        sum = max({sum,(totalTreeSum-sumUnderLeft)*sumUnderLeft,(totalTreeSum-sumUnderRight)*sumUnderRight});
        return sumUnderLeft+sumUnderRight+root->val;
    }
    
    int maxProduct(TreeNode* root) {
        TreeSum(root);
        sumUnder(root);
        return sum%MOD;
    }
};