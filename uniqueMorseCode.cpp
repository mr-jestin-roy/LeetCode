class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
     unordered_map<char, string> ourCodes{{'a',".-"},
                                             {'b',"-..."},
                                             {'c',"-.-."},
                                             {'d',"-.."},
                                             {'e',"."},
                                             {'f',"..-."},
                                             {'g',"--."},
                                             {'h',"...."},
                                             {'i',".."},
                                             {'j',".---"},
                                             {'k', "-.-"},
                                             {'l',".-.."},
                                             {'m',"--"},
                                             {'n',"-."},
                                             {'o',"---"},
                                             {'p',".--."},
                                             {'q',"--.-"},
                                             {'r',".-."},
                                             {'s',"..."},
                                             {'t',"-"},
                                             {'u',"..-"},
                                             {'v',"...-"},
                                             {'w',".--"},
                                             {'x',"-..-"},
                                             {'y',"-.--"},
                                             {'z',"--.."}};
        unordered_map<string,int> frequency;
        
        for(string word : words)
        { string w;
          for(int i=0;i<word.length();i++)
                w += ourCodes[word[i]];
         frequency[w]++;
              
        }
        return frequency.size();
        
    }
};