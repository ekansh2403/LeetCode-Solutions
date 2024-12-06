class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int cnt=0;
        int sum=0;
        unordered_set<int>st(banned.begin(),banned.end());
        for(int i=1;i<=n;i++){
            if(st.find(i)!=st.end()){
                continue;

            }
            if(sum+i<=maxSum){
                sum+=i;
                cnt++;
            }
        }
        return cnt;
    }
};