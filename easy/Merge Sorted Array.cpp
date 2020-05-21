class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        int i;
        
        for(i = 0; i < n; i++){
            for(; j < m; j++){
                if(nums2[i]<nums1[j]){
                    nums1.insert(nums1.begin()+j, nums2[i]);
                    ++m;
                    ++j;
                    nums1.pop_back();
                    break;
                }
            }
            if(j == m) break;
        }
        
        for(; i < n; i++){
            nums1[m++] = nums2[i];
        } 
    }
};