class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int idx = 0;
        
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            ++idx;
            if(idx > k) break;
            
            nums.insert(nums.begin(), nums[nums.size()-1]);
            nums.pop_back();
        }
    }
};