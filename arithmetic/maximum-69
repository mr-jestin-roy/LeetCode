class Solution {
public:
    int maximum69Number (int num) {
        int size = log10(num) + 1;
        int d;
        
        while(size){
            
            d = num/pow(10,size-1);
            d=d%10;
            if(d==6){
                d = 3*pow(10,size-1);
                num +=d;
                return num;
            }
            size--;
            
            
            
        }
        return num;
            
            
            
        
    }
};