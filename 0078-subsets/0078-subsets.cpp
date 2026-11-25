class Solution {
public:
    void func(int idx, vector<int>& current, vector<int>& arr, int N, vector<vector<int>>& ans) {
        if (idx == N) {
            ans.push_back(current);
            return;
        }
        
        // pick
        current.push_back(arr[idx]);
        func(idx + 1, current, arr, N, ans);
        current.pop_back(); // backtrack
        
        // not pick
        func(idx + 1, current, arr, N, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int N = nums.size();
        vector<vector<int>> ans;
        vector<int> current;
        func(0, current, nums, N, ans);
        return ans;
    }
};