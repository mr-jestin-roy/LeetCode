class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count =0;
        for(char x: S)
        {
            if(J.find_first_of(x)!=std::string::npos)
                count++;
        }
        return count;
        
    }
};