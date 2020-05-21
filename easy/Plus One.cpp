class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int sum;
        for(vector<int>::reverse_iterator it = digits.rbegin();it!=digits.rend();it++){
            sum = *it + carry;
            *it = sum%10;
            carry = sum/10;
        }
        if(carry) digits.insert(digits.begin(), carry);
        return digits;
    }
};