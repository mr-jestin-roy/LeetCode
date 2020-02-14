class Solution {
public:
    
    vector<string> res1;
    vector<string>result;
    
    void splitString(string s){
        istringstream iss(s);
        for(string s; iss >> s; )
            res1.push_back(s);
    }
    
    int max(){
        int size=0;
        for(int i=0;i<res1.size();i++){
            if(size<res1[i].size())
                size = res1[i].size();
        }
        return size;
    }
    
    vector<string> printVertically(string s) {
        res1.clear();
        splitString(s);
        string s2;
        int size = max();
        for(int i=0;i<size;i++){
            s2 = "";
            for(int j=0;j<res1.size();j++){
                if(i<res1[j].size())
                    s2 += res1[j][i];
           
                else
                    s2+=" ";
                     }
            while (s2.size() > 0 && s2.back() == ' ') {
                s2.pop_back();
            }
            result.push_back(s2);
        }
        
        return result;
    }
};