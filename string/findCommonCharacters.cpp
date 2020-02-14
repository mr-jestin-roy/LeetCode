class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        
        vector<string> answer;int k;
        int minFrequency[26];
        for(int i=0;i<26;i++)
            minFrequency[i] = INT_MAX;
        
        for( string S :A)
        {
            int curFrequency[26];
            for(int i=0;i<26;i++)
            curFrequency[i] = 0;
            for(char c:S)
            {   k = (int)c - 97;
                curFrequency[k]++;}
             
           for(int i=0;i<26;i++)
              minFrequency[i] = min(minFrequency[i],curFrequency[i]);
        }
        
        
        for(int i=0;i<26;i++)
            while(minFrequency[i]>0)
            {   k = ((char)i+97);
                string s(1,(char)(i+97));
                answer.push_back(s);
                minFrequency[i]--;
            }
        
        return answer;
        
        
        
    }
};