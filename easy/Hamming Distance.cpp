class Solution {
public:
    int hammingDistance(int x, int y) {
        int ret = 0;
        for(int i=0;i<31;i++){
            bool xx = (1<<i) & x;
            bool yy = (1<<i) & y;
            if(xx!=yy) ++ret;
        }
        return ret;
    }
};