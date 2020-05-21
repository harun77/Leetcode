class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        bool isFirst = true;
        
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            if(isFirst){
                isFirst = false;
            } else {
                if(*it == *(it-1)) nums.erase(it), --it; 
            }
        }
        return nums.size();
    }
};