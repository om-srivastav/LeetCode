class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int csum=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        int result=0;
        for(int i=0;i<n;i++){
            csum+=(nums[i]==0?-1:1);
            if(mp.find(csum)!=mp.end()){
                result =max(result,i-mp[csum]);
            }
            else mp[csum]=i;
        }
          
        
        return result;
    }
};