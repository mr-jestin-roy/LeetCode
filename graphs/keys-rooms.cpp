class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        vector<bool> visited(rooms.size(),false);
    
        queue<int> q;
        
        visited[0] = true;
        for(int i=0;i<rooms[0].size();i++)
                q.push(rooms[0][i]);
        
        while(!q.empty()){
            
            
            int next =q.front();
            q.pop();
            
            for(int i=0;i<rooms[next].size();i++)
                if(visited[next]==false){
                q.push(rooms[next][i]);
                }
             visited[next] = true;
        }
        
        for(int i=0;i<rooms.size();i++)
            cout<<visited[i]<<" ";
        if(find(visited.begin(),visited.end(),false)!= visited.end())
            return false;
        
        return true;
    }
};