class Solution {
public:
    void findcom(int idx, int target, vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
        if(idx==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //pick up the element
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            findcom(idx,target-arr[idx],arr,ans,ds);
            ds.pop_back();
        }
        findcom(idx+1,target,arr,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findcom(0,target,candidates,ans,ds);
        return ans;
    }
};