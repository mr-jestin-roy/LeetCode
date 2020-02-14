// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 0;
        int right = n;
        int mid;
        while(left<right)
        {
            mid = left + (right-left)/2;
            if(isBadVersion(mid))
                right = mid;
            else
                left= mid+1 ;
            
        }
        if(left == right && isBadVersion(left))
        {
            return left;
        }
        
        return -1;
    }
};
