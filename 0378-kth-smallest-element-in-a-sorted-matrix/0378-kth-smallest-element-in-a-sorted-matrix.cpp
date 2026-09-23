class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>flat;
        for(auto const &row:matrix)// flatting 2d array to 1d
        {
            for(int ele:row){
                flat.push_back(ele);
            }
        }
        sort(flat.begin(),flat.end());
        return flat[k-1];
    }
};