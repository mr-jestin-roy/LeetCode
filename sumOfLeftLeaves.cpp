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
    int sumOfLeftLeaves(TreeNode* root) {
       if(root==NULL)
           return 0;
        int sumOfLeaves=0;
        if(root->left !=NULL)
        {
            if((root->left->left ==NULL)&&(root->left->right==NULL))
            {
                sumOfLeaves += root->left->val;
            }
            else
                sumOfLeaves += sumOfLeftLeaves(root->left);
            
        }
        if(root->right !=NULL)
        {
            if((root->right->left !=NULL)&&(root->right->right!=NULL))
            {
                sumOfLeaves += sumOfLeftLeaves(root->right);
           
            }
            }
        return sumOfLeaves;
        
                
        }
    
};
