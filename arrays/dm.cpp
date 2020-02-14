#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{	int i,j ;
	    vector<vector<int>> matrix = {{2,3}};    
        vector<int> dm;
        int r = matrix.size();
        int c = matrix[0].size();
        for(int k = 0 ; k < r ; k++)
        {
            i = k;
            j = 0;
            while(i>=0)
            {
                if( k & 1 && c>0 )
                    dm.push_back(matrix[j][i]);
                else
                	dm.push_back(matrix[i][j]);
                i = i - 1;
                j = j + 1;
            } 
        }
      
          for(int k = 1 ; k <c ; k++)
        {
            j = k;
            i = r-1;
            while(j<c)
            {
                 if( k & 1 && r>0)
                    dm.push_back(matrix[j][i]);
                else
                	dm.push_back(matrix[i][j]);
                i = i - 1;
                j = j + 1;
            } 
        }
        
        for(int i = 0;i<dm.size();i++)
        	
        		cout<<dm[i];
return 0;
} 
