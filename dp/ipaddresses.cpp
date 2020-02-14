class Solution {
public:
    vector<string> result;
    vector<string> restoreIpAddresses(string s) {
        
        
        if(s.length()<4 || s.length()>12)
            return {};
        
        string ip ="";
        
        calcip(s,ip,4,0);
        
        return result;
    }
    
    void calcip(string&s,string &ip,int k,int index){
        if(k==0 && index >=s.length())
        {   
               result.push_back(ip);
               return;
            
        }
        
        if(s.length() - index <k|| s.length()-index > 3*k)
            return;
        if(ip.size()!=0)
            ip +=".";
        int i=index;
        for(i=index;i<index+3 && i<s.size();i++){
            if(isvalid(s,index,i))
                
            {
                ip +=s[i];
                calcip(s,ip,k-1,i+1);
              
            }
            else {
                
                break;
            }

        }
        
        for(int j = i-index;j>=0 && !ip.empty();j--)
                ip.pop_back();
            
        
        
    }
    
    bool isvalid(string& s, int index,int pos){
        
        if(s[index]=='0' && index-pos!=0)
            return false;
        int num=stoi(s.substr(index,pos-index+1));
       // cout<<s[index]<<":"<<num<<" ";
        if(num>=0 && num<=255)
            return true;
        return false;
        
    }
};