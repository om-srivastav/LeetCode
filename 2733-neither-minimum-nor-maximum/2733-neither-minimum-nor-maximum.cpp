class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int mn=nums[0];
      int mx=nums[n-1];
      for(int i=0;i<n;i++){
        if(nums[i]>mn && nums[i]<mx){
            return nums[i];
        }
      }
        return -1;
      }
};