class Solution {
public:
    int hammingWeight(uint32_t n) {
    //     int ans=0;
    //     while(n>0){
    //         if(n & 0b1) ans++;      
    //         n=n>>1;
    //     }
    //     return ans;
        return __builtin_popcount(n);
    }
};