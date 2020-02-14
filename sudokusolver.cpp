class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        
        solve(0,0,board);
        
        return;
        
    }
    
    
    
    bool solve(int row,int col,vector<vector<char>>&  board){
        //col check
        
        if(col == board[0].size())
        {
            col =0;
            row++;
        
        
        
        //row check
        if(row ==board.size())
            return true;
    }
        
        
        //not an  empty entry check
        
        if(board[row][col] != '.')
            return solve(row,col+1,board);
        
        
        //if empty entry iterate through values
        
            //check if values is valid
        for(int i=1;i<=board.size();i++)
        {
            char value = '0'+i;
            
            if( canPlace(row,col,board,value))
            {
                board[row][col] = value;
                if(solve(row,col+1,board))
                    return true;
                
                board[row][col] = '.';
            }
            
            
        }
        
            return false;
        
    }
    
    
    bool canPlace(int row,int col,vector<vector<char>>& board,char value){
        
        //col check
        for(int i=0;i<board[0].size();i++){
            if(board[row][i]==value)
                return false;
        }
        
        
        //row check
        for(int i=0;i<board.size();i++){
            if(board[i][col]==value)
                return false;
        }
        
        //subgrid check
        int size = sqrt(board.size());
        
        int verticalindex = floor(row /size);
        int horizontalindex = floor(col/size);

        int topleftrow = size*verticalindex;
        int topleftcol =size*horizontalindex;
        
    
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(board[topleftrow+i][topleftcol+j] ==value)
                    return false;
            }
        }
        
        
        
        return true;
        
        
    }
};