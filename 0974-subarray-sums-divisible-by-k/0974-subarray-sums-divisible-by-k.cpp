class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       int n=nums.size();
       unordered_map<int,int>mp;
       mp[0]=1;
       int count=0;
       int sum=0;
       for(int i=0;i<n;i++){
        sum+=nums[i];
        
        int rem=sum%k;
        if(rem <0){
         rem+=k;
        }
        count+=mp[rem];
        mp[rem]+=1;
        // if(mp[sum]%k==0){
        //     count++;
        // }
        // for(int j=i;j<n;j++){
        //     sum+=nums[j];
        //     if(sum%k==0){
        //         count++;
        //     }
        
       }
       return count;
    }
};