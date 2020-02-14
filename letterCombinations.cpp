class Solution {
public:
    
    vector<string> result;
    
    unordered_map<char, string> lettCombMap = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, 
                                               {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, 
                                               {'8', "tuv"}, {'9', "wxyz"}};
    vector<string> letterCombinations(string digits) {
        string mne="";
        if(digits.size()==0)
            return result;
        combinations(digits,mne,digits.size(),0);
        return result;
    }
    
    void combinations(string&digits, string& mne,int size,int index)
    {
        if(size==0)
        {
            result.push_back(mne);
            return;
        }
        string eq = lettCombMap[digits[index]];
        
        for(int i=0;i<eq.size();i++){
            
            mne+=eq[i];
            combinations(digits,mne,size-1,index+1);
            mne.pop_back();
            
        }
    }
        
        
        
        
        
    };