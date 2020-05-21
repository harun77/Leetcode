class Solution {
public:
    int climbStairs(int n) {
        long long ret = 1;
        long long couple = n/2;
        
        long long m;
        long long r;
        long long prod;
        
        for(int i = 1; i <= couple; i++){
            m = n - i;
            int p = max(i, n - 2*i);
            int q = min(i, n - 2*i);
            cout<<p<<" "<<q;
            prod = 1;
            long long div = 1;
            
            for(int j = p + 1; j <= m; j++){
                prod *= j;
                if(div <= q){
                    prod /= div;
                    ++div;
                } 
            }
            
            for(;div <= q; div++) prod /= div;
            //cout<<prod<<" ";
            ret += prod;
        }
        return ret;
    }
};