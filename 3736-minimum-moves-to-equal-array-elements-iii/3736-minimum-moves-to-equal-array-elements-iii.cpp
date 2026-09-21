class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mx=nums[n-1];
        // int i=0;
        int move=0;
      for(int i=0;i<n;i++){
        move+=mx-nums[i];
        }
      
        return move;
    }
};