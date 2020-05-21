class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cSum[nums.size()+1];
        cSum[0]=0;
        int idx=1;
        
        for(vector<int>::iterator it=nums.begin();it!=nums.end();it++){
            cSum[idx]=*it + cSum[idx-1];
            ++idx;
        }
        
        int ret;
        
        for(int i = 1; i < idx ; i++ ){
            for(int j = i; j < idx ; j++ ){
                if( i ==1 && j==1) ret = cSum[j]-cSum[i-1];
                else ret=max(ret, cSum[j]-cSum[i-1]);
            }
        }
        return ret;
    }
};