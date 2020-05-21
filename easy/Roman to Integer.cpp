class Solution {
public:
    int romanToInt(string s) {
        map<char, int>mymap;
        mymap['I'] = 1; mymap['L'] = 50;
        mymap['V'] = 5; mymap['C'] = 100;
        mymap['X'] = 10; mymap['D'] = 500; mymap['M'] = 1000;
        
        int ret = 0;
        int val;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                if(i+1 < s.size() && (s[i+1] == 'V' || s[i+1] == 'X')){
                    if(s[i+1] == 'V') val = 4;
                    else val = 9;
                    ++i;
                } else {
                    val = mymap[s[i]];
                }
            } else if(s[i]=='X'){
                if(i+1 < s.size() && (s[i+1] == 'L' || s[i+1] == 'C')){
                    if(s[i+1] == 'L') val = 40;
                    else val = 90;
                    ++i;
                } else {
                    val = mymap[s[i]];
                }
            } else if(s[i]=='C'){
                if(i+1 < s.size() && (s[i+1] == 'D' || s[i+1] == 'M')){
                    if(s[i+1] == 'D') val = 400;
                    else val = 900;
                    ++i;
                } else {
                    val = mymap[s[i]];
                }
            } else {
                val = mymap[s[i]];
            }
            ret += val;
        }
        return ret;
    }
};