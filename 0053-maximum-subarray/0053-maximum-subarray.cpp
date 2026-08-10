class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxiS=INT_MIN;
        int currsum=0;
        int n=nums.size();
        for(int val: nums){
            currsum+=val;
            maxiS=max(currsum,maxiS);
            if(currsum<0){
                currsum=0;
            }
        }
        return maxiS;
    }
};