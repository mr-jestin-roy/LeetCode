class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> Numbers;
        while(left<=right)
        {
            if(selfDivide(left)) Numbers.push_back(left);
            left++;
        }
        return Numbers;
    }
        
        bool selfDivide(int n){
            int rem,num=n;
            while(n!=0)
            {
                rem= n%10;
                
                if((rem==0)||(num%rem!=0)) return false;
                n=n/10;
            }
            return true;
        }
    
};