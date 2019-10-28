#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

	vector<int> nums = {1,7,3,6,5,6};
	int sum = 0 , sumleft = 0 ;
    for (int &i:nums)
    {
        sum += i;
        
     }
        
     for (int i = 0; i < nums.size(); ++i)
        {   
            sum -= nums[i];
            
            if (sumleft == sum)
              cout << i;
            sumleft += nums[i];
         }
        cout << -1;
return 0;
} 
