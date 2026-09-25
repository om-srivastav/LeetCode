class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
     vector<int>ans;
     unordered_set<int>mp;
     int n=grid.size();
     int a,b;
     int expSum=0,actualSum=0;
     for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            actualSum+=grid[i][j];
     
     if(mp.find(grid[i][j])!=mp.end()){
        a=grid[i][j];//repeating values
        ans.push_back(a);
     }
     mp.insert(grid[i][j]);
        }
     }
     expSum=(n*n) * (n*n+1)/2;//n(n+1)/2
     b=expSum+a-actualSum;//to find the missing val-->formula based sum(including b (the missing one) + a(the repeated one) - b =actual Sum)
     ans.push_back(b);
     return ans;
    }
};