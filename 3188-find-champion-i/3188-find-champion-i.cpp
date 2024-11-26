class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>winner(n,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    winner[i]++;
                }
            }
        }
        int ans=0;
        for(int i=1;i<n;i++){
           if(winner[i]>winner[ans]){
                ans=i;
           }
        }
        return ans;
    }
};