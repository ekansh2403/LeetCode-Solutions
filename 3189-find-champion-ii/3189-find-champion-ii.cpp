class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>indegree(n,0);
        for(auto it:edges){
            indegree[it[1]]++;
        }
        int ans=-1;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                cnt++;
                ans=i;
                
            }
        }
        return (cnt>1)?-1:ans;
    }
};