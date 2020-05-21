class Solution {
public:
    bool isPalindrome(int x) {
      string s = to_string(x);
      int L = s.size();
      bool ret = true;
      for(int idx=0;idx<L/2;idx++){
        if(s[idx] != s[L-1-idx]) {
            ret = false;
            break;
        }
       }
       return ret;
    }
};