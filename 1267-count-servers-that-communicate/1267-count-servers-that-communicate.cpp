class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
      
        int m = grid[0].size();;
        int comm = 0;
      
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j] ==1){
                    bool cancomm=false;

                    for(int k =0;k<m;++k){
                        if(k!=j && grid[i][k]==1){
                            cancomm= true;
                            break;
                        }
                    }

                    if(cancomm){
                        comm++;
                    }else{
                        for(int l =0;l<n;++l){
                            if(l!=i && grid[l][j]==1){
                                cancomm=true;
                                break;
                            }
                        }
                        if(cancomm){
                            comm++;
                        }
                    }
                }
            }
        }
        return comm++;
    }
};