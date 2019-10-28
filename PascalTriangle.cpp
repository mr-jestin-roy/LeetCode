#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    void  generate(int numRows) {
        vector<vector<int>> pascal;
        if(numRows==0) {cout<<"Null";return;}
        vector<int> row;
        row.push_back(1);
        pascal.push_back(row);
        for(int i=1;i<numRows;i++)
        {
            vector<int> row,prev_row;
            for(int k=0;k<pascal[i-1].size();k++)
            prev_row.push_back(pascal[i-1][k]);
            row.push_back(1);
            for(int j=1;j<i;j++)
                row.push_back(prev_row[j]+prev_row[j-1]);
            row.push_back(1);
            for(int k=0;k<row.size();k++)
            cout<<row[k];
            cout<<endl;
            
            pascal.push_back(row);
        }
        for(int i=0;i<pascal.size();i++)
        	{for(int j=0;j<pascal[i].size();j++)
        	  {cout<<pascal[i][j];}
        	  cout<<endl;}
    }
    
int main()
{  int n;
   cin>>n;
   generate(n);
}
