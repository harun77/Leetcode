class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ret = 0;
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            ret += isEvenDigit(*it);
        }
        return ret;
    }
    
    int isEvenDigit(int n){
        return countDigit(n)%2 == 0;
    }
    
    int countDigit(int n){
        if(n == 0) return 0;
        return 1 + countDigit( n/ 10 );
    }
};