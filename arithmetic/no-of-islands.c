#include<iostream>
#include<vector>

using namespace std;

void change(vector<vector<char>> &grid,int i,int j)
    {   if( i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]=='0')
        return;
        grid[i][j]=='0';
        change(grid,i+1,j);
        change(grid,i-1,j);
        change(grid,i,j-1);
        change(grid,i,j+1);
            }
int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]=='1')
                {   count++;
                    change(grid,i,j);
                 }
       return count; 
    }


int main()
	{
		vector<vector<char>> grid{{'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0'}};
		
	    cout<<numIslands(grid);
	    return 0;
	}
