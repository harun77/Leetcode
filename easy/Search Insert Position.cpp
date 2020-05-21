class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx = 0;
        for(vector<int>::iterator it=nums.begin();it!=nums.end();it++){
            if(*it >= target) return idx;
            ++idx;
        }
        return idx;
    }
};