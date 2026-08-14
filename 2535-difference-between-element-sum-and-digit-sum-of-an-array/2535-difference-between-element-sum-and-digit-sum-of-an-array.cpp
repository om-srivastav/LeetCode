class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int dsum = 0;
        // int temp;
        int diff;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int temp = nums[i];
        while(temp>0){
        // int temp=nums[i];
        int rem = temp%10;
        temp/=10;
        dsum+=rem;
      }
        }
      return abs(dsum-sum);

    } 
};