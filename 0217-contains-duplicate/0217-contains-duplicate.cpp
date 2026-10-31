class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,bool>mp;//key ele of nums and value = value idx of nums ele
        for(int i = 0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                return true;
            }
            mp[nums[i]]=true;
        }
        return false;
    }
};