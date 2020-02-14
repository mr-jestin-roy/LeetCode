class Solution {
public:
    string toGoatLatin(string S) {
        string result="";
        unordered_set <char> vowels;
        for(char c:"aeiouAEIOU")
            vowels.insert(c);
        istringstream iss(S);string word;
        int index = 0;
        while(iss>>word)
        {  index++;
         if(index>1)
            result += " ";
          if(vowels.find(word[0])!=vowels.end())
          {result += word+"ma";}
            else
              result += word.substr(1,word.length()-1) +word[0]+"ma";
            
          for(int j=index;j>0;j--)
               result+="a";
        }
        
        return result;
    }
    
    
};