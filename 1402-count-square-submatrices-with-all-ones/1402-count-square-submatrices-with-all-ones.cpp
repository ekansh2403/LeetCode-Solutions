class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
         int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> ps(n + 1, vector<int>(m + 1));
        // prefix sum matrix

        for (int i = 1; i <= n; ++ i){
            for (int j = 1; j <= m; ++ j){
                ps[i][j] = ps[i - 1][j] + ps[i][j - 1] - ps[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        }
        int ans = 0;
        // enum side from 1 to min(num_rows, nums_cols)
        for (int s = 1; s <= min(n, m); ++ s){
            for (int i = s; i <= n; ++ i){
                for (int j = s; j <= m; ++ j){
                    if (ps[i][j] - ps[i - s][j] - ps[i][j - s] + ps[i - s][j - s] == s * s) ++ ans;
                }
            }
        }
        return ans;
    }
};