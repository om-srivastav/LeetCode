class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int m=nums.size();
        int n=nums[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(nums[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};