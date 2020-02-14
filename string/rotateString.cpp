class Solution {
public:
    bool rotateString(string A, string B) {
        return ((A.length()==B.length())&&(((A.append(A)).find(B))!=-1));
    }
};