/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node == NULL)
            return NULL;
        
        queue<Node*> qt;
        unordered_map<Node*,Node*>mp;
        
        qt.push(node);
        
        mp[node] = new Node(node->val);
        while(qt.size()!=0){
            Node* curr = qt.front();
            qt.pop();
            
            for(int i=0;i<curr->neighbors.size();i++){
            if(!mp[curr->neighbors[i]]){
                mp[curr->neighbors[i]] = new Node(curr->neighbors[i]->val);
                qt.push(curr->neighbors[i]);
            }
            
            mp[curr]->neighbors.push_back(mp[curr->neighbors[i]]);
            }
        }
        return mp[node];
    }
    
};