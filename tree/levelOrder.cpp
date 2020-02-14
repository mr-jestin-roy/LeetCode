/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };(
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector <int>> output;
        
        if(root==NULL) return output;
        vector<int> level;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {    int size= q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* x = q.front();
                q.pop();
                level.push_back(x->val);
                if(x->left!=NULL) q.push(x->left);
                if(x->right!=NULL) q.push(x->right);
               
            }
          output.push_back(level);
                level.clear();
         
         
        }
        return output;
    }   
};