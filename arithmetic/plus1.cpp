#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int num;
	vector<int> digits = {9,9,9};
	 digits.end()[-1]++;
        for(auto it = digits.end();it != digits.begin();it--)
        {
            if( *it > 9)
            {  
             *it = 0;
                *(it-1) += 1;
             }
        }
        if(digits.begin()[1] >9)
        	{
        	 digits[0] = 0 ;
        	digits.insert(digits.begin(),1);
        	}
        for( int &i : digits)
        {
        	cout<< i ;
        	}
return 0;
} 
