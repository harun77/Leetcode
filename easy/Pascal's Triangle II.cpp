class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>v, now;
        v.push_back(1);
        
        for(int i = 1; i <= rowIndex; i++){
            now.push_back(v[0]);
            
            for(int j = 1; j < v.size(); j++){
                now.push_back(v[j-1] + v[j]);
            }
            now.push_back(v[v.size()-1]);
            v = now;
            now.clear();
        }
        return v;
    }
};