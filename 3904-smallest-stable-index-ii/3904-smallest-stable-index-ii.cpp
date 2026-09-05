class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n= nums.size();
        int score;
        vector<int>suffix(n);
        int mn=nums[n-1];
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            mn=min(mn,nums[i]);
            suffix[i]=mn;
        }
        int mx=nums[0];
         for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            score=mx-suffix[i];
            if(score<=k){
                return i;
            }
        }
        return -1;
    }
};