class Solution {
public:
    int trailingZeroes(int n) {
        long long two, five, num;
        
        two = n/2;
        five = 0;
        num = 5;
        
        while(num<=n){
            five = five + n/num;    
            num *= 5;
        }
        
        return min(two, five);
    }
};