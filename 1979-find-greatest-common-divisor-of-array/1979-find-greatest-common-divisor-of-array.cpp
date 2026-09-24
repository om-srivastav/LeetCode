class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[n-1];
        if(a==0) return b;
        if(b==0)return a;
        if(a==b)return a;
        int gcd=1;
        for(int i=1;i<=min(a,b);i++){
            if(a%i==0 && b%i==0){
          gcd =i;
            }
        }
        return gcd;
    }
};