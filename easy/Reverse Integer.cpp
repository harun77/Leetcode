class Solution {
public:
    long long int reverse(long long int x) {
        bool isNegative = x<0 ? true : false;
        x = abs(x);
        long long int ret = 0;
        int d;
        
        while(x){
            d = x%10;
            x/=10;
            ret = ret*10+d;
        }
        
        if(isNegative) ret *= -1;
        if(ret<pow(-2,31) || ret>pow(2,31)-1) ret=0;
        return ret;
    }
};