class Solution {
public:
    int hammingWeight(int n) {
        long long i =0;
        long long  ones=0;
        while(i<32){
        long long bit = (n >> i) & 1;
        if(bit){
            ones++;
        }
        i++;
        
        }
        return ones;
    }
};