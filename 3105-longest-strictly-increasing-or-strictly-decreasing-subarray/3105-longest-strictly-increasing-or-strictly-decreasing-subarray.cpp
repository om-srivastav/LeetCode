class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.empty()) return 0;
        int maxlen=1;
        int inclen=1;
        int declen=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                inclen+=1;
                declen=1;
            }
            else if(nums[i-1]>nums[i]){
                declen+=1;
                inclen=1;
            }
            else{
                inclen=1;
                declen=1;
            }
            maxlen=max({maxlen,declen,inclen});
        }
        return maxlen;
    }
};