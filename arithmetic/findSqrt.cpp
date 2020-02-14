class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1;
        long int l,r,mid;
        l=0;
        r=x/2;
        
        while(l<=r)
        { mid = (l+r)/2;
        if(mid*mid==x)
            return mid;
        else if(mid*mid>x)
            r= mid-1;
        else 
            l = mid+1;
         
            }
        if(mid*mid>x)
            return mid -1;
        else
            return mid;
    }
};