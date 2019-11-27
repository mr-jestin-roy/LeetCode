class Solution {
public:
    bool validPalindrome(string s) {
        int i= 0;
        int j= s.size()-1;
        while ( i<=j )
        {
            if(s[i]!=s[j])
               return subarray(s,i+1,j) || subarray(s,i,j-1);
          i++;
          j--;
        }
        return true;
        
    }
    bool subarray(string s,int i, int j)
    {
         while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
          i++;
          j--;
        }
        return true;
    }
    };