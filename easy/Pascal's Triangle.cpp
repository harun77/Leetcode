class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        if(numRows == 0) return ret;
        vector<int>v, now;
        
        v.push_back(1);
        ret.push_back(v);
        
        for(int i = 2; i <= numRows; i++){
            now = ret[ret.size()-1];
            vector<int>v;
            v.push_back(now[0]);
            
            for(int j = 1; j < now.size(); j++){
                v.push_back(now[j-1] + now[j]);
            }
            v.push_back(now[now.size()-1]);
            ret.push_back(v);
        }
        return ret;
    }
};