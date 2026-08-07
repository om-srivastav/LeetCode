class Solution {
public:
set<vector<int>>s;
void getallcombinations(vector<int>& arr,int idx,int target,vector<vector<int>> &ans,vector<int>combin){
    int n=arr.size();
    if(idx==n || target<0){
        return;
    }
    if(target==0){
        if(s.find(combin)==s.end()){
            ans.push_back(combin);
            s.insert(combin);
        }
        // ans.push_back({combin});
        return;
    }
    combin.push_back(arr[idx]);
    //single
    getallcombinations(arr,idx+1,target-arr[idx],ans,combin);
    //multiple
    getallcombinations(arr,idx,target-arr[idx],ans,combin);
    combin.pop_back();
    //exclusion
    getallcombinations(arr,idx+1,target,ans,combin);

}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>combin;
        int n=arr.size();
        getallcombinations(arr,0,target,ans,combin);

        return ans;
    }
};