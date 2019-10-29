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
    vector<int> preorder(Node* root) {
        vector<Node*> stack;
        vector<int> output;
        
        if(root==NULL)
            return output;
        stack.push_back(root);
        while(!stack.empty())
        {
            Node* node = stack.back();
            stack.pop_back();
            output.push_back(node->val);
            int k= stack.size();
            for(int i=0;i<node->children.size();i++)
                stack.push_back(node->children[i]);
            reverse(stack.begin()+k,stack.end());
        }
     return output;   
    }
};

