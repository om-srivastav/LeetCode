class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int C) {
        int n=nums.size();
        int mx=*max_element(nums.begin(),nums.end());
        vector<bool>res(n);
       
        for(int i=0;i<n;i++){

 int sum=nums[i]+C;
 if(sum>=mx){
res[i]=true;
 }
 else{
    res[i]=false;
 }

        }
        return res;
    }
};