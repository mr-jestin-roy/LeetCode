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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<TreeNode*> stack;
        vector<int> output;
        if (root == NULL)
            return output;
        TreeNode* curr = root;
        while(curr!=NULL || !stack.empty())
        {
            while(curr!=NULL){
                stack.push_back(curr);
                    curr= curr->left;
            }
            curr = stack.back();
            stack.pop_back();
            output.push_back(curr->val);
            curr= curr->right;
        }
        return output;
    }
};
