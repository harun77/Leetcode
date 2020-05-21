class Solution {
public:
    int mySqrt(int x) {
        long long low = 0;
        long long  high = x;
        long long mid = (low+high)/2;
        long long _x = x;
        
        while(low<=high){
            if(mid*mid<_x){
                low = mid + 1;
            } 
            else if(mid*mid>_x) {
                high = mid - 1;
            }
            else break;
            mid = (low+high)/2;
        }
        return mid;
    }
};