class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
        if(j==i)// for primary diagonal from above left to below right
        {
          sum+=mat[i][j];
                }
                else if(j==n-i-1)//for secondry diagonal from above right to below left
                {
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};