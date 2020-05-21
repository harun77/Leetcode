class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0) return "";
        
        string ret="";
        int idx=-1;
        bool isTaken;
        bool isToBreak;
        char c;
        
        while(1){
            isTaken=isToBreak=false;
            ++idx;
            
            for(vector<string>::iterator it=strs.begin();it!=strs.end();it++){
                string s=*it;
                
                if(idx>=s.size()){
                    isToBreak=true;
                    break;
                }
                
                if(!isTaken){
                    c=s[idx];
                    isTaken=true;
                } 
                else{
                    if(s[idx] != c){
                        isToBreak=true;
                        break;
                    }
                }
            }
            if(!isToBreak) ret += c;
            else break;
        }
        
        return ret;
    }
};