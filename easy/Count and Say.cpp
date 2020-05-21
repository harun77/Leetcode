class Solution {
public:
    string countAndSay(int n) {
        string ret = "1";
        
        for(int i = 2; i <= n; i++){
            string s = ret;
            ret = "";
            
            int count = 0;
            char ch;
            
            for(int j = 0; j < s.size(); j++){
                if(count == 0){
                    count = 1;
                    ch = s[j];
                } else {
                    if(ch == s[j]) ++count;
                    else{
                        ret = ret + to_string(count) + ch;
                        count = 1;
                        ch = s[j];
                    }
                }
            }
            if(count){
             ret = ret + to_string(count) + ch;   
            }
        }
        
        return ret;
    }
};