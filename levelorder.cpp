/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> output;
        vector<int> level;
        vector<Node*> stack;
        
        if (root==NULL)
            return output;
        stack.push_back(root);
        level.push_back(root->val);
            
        output.push_back(level);
        while(!stack.empty())
        {   vector<int> level;
            Node *node = stack.back();
            stack.pop_back();
            
            for(int i=0;i<node->children.size();i++)
            {
                stack.push_back(node->children[i]);
                
               level.push_back(node->children[i]->val);
            }
            if(!level.empty())
            output.push_back(level);
            
            
                
        }
        return output;
    }
};

