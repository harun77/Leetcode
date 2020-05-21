class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s;
        for(vector<int>::iterator it1 = nums1.begin(); it1 != nums1.end(); it1++){
            int a = *it1;
            for(vector<int>::iterator it2 = nums2.begin(); it2 != nums2.end(); it2++){
                int b = *it2;
                if(a == b){
                    s.insert(a);
                    break;
                }
            }
        }
        return vector<int>(s.begin(), s.end());
    }
};