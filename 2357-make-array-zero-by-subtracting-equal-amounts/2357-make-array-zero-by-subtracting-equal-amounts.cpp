class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int mn=*min_element(nums.begin(),nums.end());
        int n=nums.size();
        int ops=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                continue;
            }
    if(i==0 || nums[i]!=nums[i-1]){
    
    ops++;
  }
        }
        return ops;
    }
};