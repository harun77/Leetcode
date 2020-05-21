class Solution {
public:
    string addBinary(string a, string b) {
        int L1 = a.size();
        int L2 = b.size();
        
        if(L1<L2) for(int i=1;i<=L2-L1;i++) a="0"+a;
        if(L1>L2) for(int i=1;i<=L1-L2;i++) b="0"+b;
        
        int carry = 0;
        string ret="";
        int L = a.size();
        
        for(int i=L-1;i>=0;i--){
            int x = a[i]-'0';
            int y = b[i]-'0';
            
            int sum = x+y+carry;
            if(sum < 2){
                ret = (char)(sum+'0')+ret;
                carry = 0;
            }else{
                if(sum == 2){
                    ret = '0'+ret;
                    carry = 1;
                } else {
                    ret = '1'+ret;
                    carry = 1;
                }
            }
        }
        if(carry) ret = '1'+ret;
        return ret;
    }
};