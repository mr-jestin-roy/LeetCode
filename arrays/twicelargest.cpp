#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

	vector<int> nums = {1};
	auto max = max_element(nums.begin(),nums.end());
	auto i = find( nums.begin(),nums.end(), *max );
        sort(nums.begin(),nums.end());
        if ( nums.end()[-1] > (2 * nums.end()[-2]))
            cout<< i - nums.begin();
return 0;
} 
