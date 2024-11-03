class Solution {
public:
using vi=vector<int>;
    using vvi=vector<vi>;
    int minTimeToReach(vector<vector<int>>& mt) {
         int n = mt.size();
        int m = mt[0].size();
        vvi dist(n, vi(m, INT_MAX));
        
        priority_queue<vi, vvi, greater<>> pq;
        pq.push({0, 0, 0}); 
        dist[0][0] = 0;
        
        vvi dir = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        
        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();
            
            int t = curr[0];
            int r = curr[1];
            int c = curr[2];
            
            if (t > dist[r][c])   continue;
              
            
            
            for (auto& d : dir) {
                int nr = r + d[0];
                int nc = c + d[1];
                
                if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                    int nt = max(t, mt[nr][nc]) + 1;
                    
                    if (nt < dist[nr][nc]) {
                        dist[nr][nc] = nt;
                        pq.push({nt, nr, nc});
                    }
                }
            }
        }
        
        return dist[n - 1][m - 1];
    }
};