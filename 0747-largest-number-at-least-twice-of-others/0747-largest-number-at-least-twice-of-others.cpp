class Solution {
public:
    int dominantIndex(vector<int>& nums) {
         int index = max_element(nums.begin(), nums.end()) - nums.begin();
        sort(nums.begin(),nums.end());
        int n=nums.size();
       

        int mx=nums[n-1];
        int mx2=nums[n-2];
        int p=mx2*2;
        if(mx>=p){
       return index;
        }
        return -1;
    }
};