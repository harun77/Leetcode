class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>arr;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                arr.push_back(tolower(s[i]));
            }
        }
        vector<char>v(arr.rbegin(), arr.rend());
        return arr == v;
    }
};