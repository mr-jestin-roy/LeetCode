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
public:
    bool isUnivalTree(TreeNode* root) {
        bool Left_Univalued,right_Univalued;
        if((root->left==NULL) || (root->left->val ==root->val) && (isUnivalTree(root->left)))
             Left_Univalued = true;
        else
             Left_Univalued = false;
        
        
        if((root->right==NULL) || (root->right->val ==root->val) && (isUnivalTree(root->right)))
            right_Univalued = true;
        else
            right_Univalued = false;
        
        return Left_Univalued && right_Univalued;
    }
};