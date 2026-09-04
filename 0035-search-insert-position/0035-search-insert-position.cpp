class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int index=nums[0]; 
        for (int i=0;i<n;i++){
            if(nums[i]>=target){
                index=i;
              return index ;
            }
        }
        return n;
    }
};