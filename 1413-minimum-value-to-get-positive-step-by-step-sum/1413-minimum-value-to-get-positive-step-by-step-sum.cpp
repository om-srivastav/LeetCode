class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int minv=0,s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
            minv=min(minv,s);
        }
        return 1-minv;
    }
};