class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mymap;
        
        int idx=0;
        vector<int>::iterator it;
        for (it = nums.begin() ; it != nums.end(); ++it){
            int val = *it;
            mymap.insert({val, idx});
            ++idx;
        } 
        
        vector<int>arr;
        idx=0;
        int index;
        for (it = nums.begin() ; it != nums.end(); ++it){
            int need = target - *it;
            if(mymap.find(need) != mymap.end()){
                index = mymap[need];
                if(idx != index) break;
            }
            ++idx;
        }
        arr.push_back(idx);
        arr.push_back(index);
        return arr;
    }
};