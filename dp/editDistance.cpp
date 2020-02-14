class Solution {
public:
    
        
    int minDistance(string word1, string word2) {
        vector<vector<int> > distance( word2.length()+1 , vector<int> (word1.length()+1,0));  
    
        calcdistance(word1,word2,distance);
        return distance[word2.length()][word1.length()];
        
    }
    
    void calcdistance(string&word1,string& word2,vector<vector<int>>& distance){
        
        for(int i=0;i<word1.length()+1;i++){
            distance[0][i]=i;
        }
        
        for(int i=1;i<word2.length()+1;i++){
            distance[i][0]=i;
            for(int j=1;j<word1.length()+1;j++){
            
               
                   if(word1[j-1]==word2[i-1])
                       distance[i][j]=distance[i-1][j-1];
                        
                else
                    
                    distance[i][j] = min({distance[i-1][j],distance[i][j-1],distance[i-1][j-1]})+1;
                
            }
            
        }
    }
        
    

};