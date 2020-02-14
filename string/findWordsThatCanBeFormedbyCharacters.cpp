class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum=0;
        int chars_count[26]={0};
        for(int i=0;i<chars.length();i++)
            chars_count[((int)chars[i])-97]++;
        
        for(string word:words)
        {
            int temp_count[26];
             copy(begin(chars_count), end(chars_count), begin(temp_count));
            
            int word_count=0;
            for(char ch:word)
            {
                if(temp_count[(int)ch-97]>0)
                {word_count++;
                temp_count[(int)ch-97]--;}
                
            }
            if(word_count==word.length())
                sum+=word.length();
        }
    return sum;
    }
};