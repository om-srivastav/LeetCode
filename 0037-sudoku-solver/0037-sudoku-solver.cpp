class Solution {
public:
bool isSafe(vector<vector<char>>&board,int row,int col,char dig){
    //horizontal
    for(int j=0;j<9;j++){
        if(board[row][j]==dig){
            return false;
        }
    }

//vertical
for(int i=0;i<9;i++){
    if(board[i][col]==dig){
        return false;
    }
}
//grid
int sr=(row/3)*3;//starting row
int sc=(col/3)*3;//starting col

for(int i=sr;i<=sr+2;i++){
    for(int j=sc;j<=sc+2;j++){
        if(board[i][j]==dig){
            return false;
        }
    }
}
return true;
}
bool helper(vector<vector<char>>&board,int row,int col){
    if(row==9)//after last row
    {
        return true;//base case for this recursive func.
    }
    //row wise visiting every cell
    int nextRow=row;
    int nextCol=col+1;
    if(nextCol==9){
        nextRow=row+1;
        nextCol=0;
    }
    if(board[row][col] !='.')//the fixed elem in the cell
    return helper(board,nextRow,nextCol);

//placing the digit
  for(char dig='1'; dig<='9'; dig++){
    if(isSafe(board,row,col,dig)){
        board[row][col]=dig;
    
    if(helper(board,nextRow,nextCol)){
        return true;
    }
    
    board[row][col]='.';
    }
}
return false;
}
    void solveSudoku(vector<vector<char>>& board) {
        helper(board,0,0);
    }

};