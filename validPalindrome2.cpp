class Solution {
public:
    bool isPalindrome(string s) {
       
        int i= 0;
        int j= s.size()-1;
        while ( i<=j )
        {   if(!isalpha(i))
                {i++;continue;}            
        else if(!isalpha(j)){j--;continue;}
         else if(s[i]!=s[j])
               return false;
         else{ i++;
          j--;}
        }
        return true;
        
    }
    };