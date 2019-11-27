class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int>even ,odd;
        for(int a:A)
        {
            if(a&1)
                odd.push_back(a);
            else
                even.push_back(a);
        }
        for(int a : odd)
           even.push_back(a);
        return even;
    }
};