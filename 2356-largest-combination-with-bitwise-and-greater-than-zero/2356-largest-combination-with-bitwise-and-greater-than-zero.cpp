class Solution {
public:
    int largestCombination(vector<int>& c) {
        int ans=0;
        int cnt;
        for(int i=0;i<24;i++){
            cnt=0;
            for(auto &it:c){
                if((it&(1<<i))!=0){
                    cnt+=1;
                }
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};