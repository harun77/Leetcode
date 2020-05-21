class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mymap;
        
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            if(mymap.find(*it) == mymap.end()) mymap[*it] = 1;
            else ++mymap[*it];
        }
        
        vector<int>ret;
        
        for(map<int, int>::iterator it = mymap.begin(); it != mymap.end(); it++){
            if(it->second > nums.size()/3) ret.push_back(it->first);
        }
        return ret;
    }
};