class Solution {
public:
    vector<vector<string>> result;
    vector<vector<string>> solveNQueens(int n) {
        
        vector<int> col;
        generate(0,n,col);
        return result;
        
    }
    
    void generate(int row,int n,vector<int>& columnplace){
        
        if(row == n){
            
             for(int j=0;j<columnplace.size();j++)
                cout<<columnplace[j];
            cout<<" ";
            board(columnplace,n);
            return;
        }
        
        for(int col = 0;col<n;col++){
            columnplace.push_back(col);
           
            if(isvalid(columnplace))
                generate(row+1,n,columnplace);
            columnplace.pop_back();
        }
        
        
    }
    
    
    bool isvalid(vector<int>& col)
    {
        int current_row = col.size()-1;
        
        for(int row=0;row<col.size()-1;row++)
        {
            
            int col_diff = abs(col[current_row]-col[row]);
            int row_diff = abs(current_row-row);
            
            if(col_diff==0 || col_diff == row_diff)
                return false;
        }
        
        return true;
        
    }
    
    void board(vector<int>& columnplace,int n)
    {   
        string s;
        vector<string> res;
        
        for(int i=0;i<n;i++){
            s="";
            for(int j=0;j<n;j++)
                if(j==columnplace[i])
                    s+="Q";
                else
                    s+=".";
            
        res.push_back(s);
        }
        result.push_back(res);
    }
};