class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mymap;
        
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            if(mymap.find(*it) == mymap.end()) mymap[*it] = 1;
            else ++mymap[*it];
        }
        
        int ret;
        
        for(map<int, int>::iterator it = mymap.begin(); it != mymap.end(); it++){
            if(it->second > nums.size()/2) ret = it->first;
        }
        return ret;
    }
};