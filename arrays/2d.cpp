#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{	    int nums[4] = {3,2,2,3};
		int val = 3;
	    int cnt = 0;
        for(int i = 0;i<4-cnt;i++)
        {
            //if(nums[i] == val)
            //{   cnt++;
                for( int j =i+1;j<4;i++)
                {
                    nums[j-1] = nums[j];
                    
                }
            //}
        }
        for(int i =0;i<4-cnt;i++)
        	cout<<nums[i];
return 0;
} 
