class Solution {
public:
    string toLowerCase(string str) {
        string result;
        for(int i =0;i<str.size();i++)
        {if(((int)str[i]>64)&&((int)str[i]<91))
            {result.push_back((char)(str[i]+32));
                
            }
         else
                result.push_back((char)str[i]);}
        return result;
    }
};

