class Solution {
public:
    int count = 0;
    int climbStairs(int n) {
        waysToClimbStairs(n);
        return count;
    }
    
    void waysToClimbStairs(int n){
        if(n==0){
            count++;
            return;
        }
        if(n<0) return;
        waysToClimbStairs(n-1);
        waysToClimbStairs(n-2);
    }
};


class Solution {
public:
    int climbStairs(int n) {
        int array[n+1]={0};
        array[0]=1;
        array[1]=1;
        for(int i=2 ;i<n+1;i++){
            array[i] = array[i-1] +array[i-2];
            
        }
        
        return array[n];    
    }
    
};