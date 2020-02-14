class Solution {
public:
    string reverseOnlyLetters(string S) {
        int i=0,j=S.size()-1;char temp;
        while(i<j)
        {    
            if((!isalpha(i))&&(!isalpha(j)))
            {   
                temp=S[i];
                S[i]=S[j];
                S[j]=temp;
                i++;
                j--;
            }
            else if((!isalpha(i))&&(isalpha(j)))
                i++;
            else if((isalpha(i))&&!(isalpha(j)))
                j--;
            else {i++,j--;}
        }
        return S;
    }
};