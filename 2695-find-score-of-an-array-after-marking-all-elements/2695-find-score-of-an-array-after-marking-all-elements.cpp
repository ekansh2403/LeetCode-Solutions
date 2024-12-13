class Solution {
public:
using ll=long long;
    long long findScore(vector<int>& nums) {
        ll score=0;
        int n=nums.size();
        vector<bool>vis(n,false);
        vector<pair<int,int>>pos;
        for(int i=0;i<n;i++){
            pos.push_back({nums[i],i});

        }
        sort(begin(pos),end(pos));
        for(int i=0;i<n;i++){
            int idx=pos[i].second;
            int val=pos[i].first;

            if(!vis[idx]){
                score+=val;
                vis[idx]=true;
                if(idx-1>=0){
                    vis[idx-1]=true;
                }
                if(idx+1<n){
                    vis[idx+1]=true;
                }
            }
        }
        return score;
    }
};