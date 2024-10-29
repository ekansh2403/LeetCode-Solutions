class Solution {
public:
int m;
int n;
vector<int>direction={-1,0,1};
int dfs(int row,int col,vector<vector<int>>&grid,vector<vector<int>>&temp){
    if(temp[row][col]!=-1){
        return temp[row][col];
    }
    int moves=0;
    for(auto dir:direction){
        int newRow=row+dir;
        int newCol=col+1;
        if(newRow<m&&newRow>=0&&newCol>=0&&newCol<n&&grid[newRow][newCol]>grid[row][col]){
            moves=max(moves,1+dfs(newRow,newCol,grid,temp));
        }

    }
    return temp[row][col]=moves;
}
    int maxMoves(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        int res=0;
        vector<vector<int>>temp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            res=max(res,dfs(i,0,grid,temp));
        }        
        return res;
    }
};