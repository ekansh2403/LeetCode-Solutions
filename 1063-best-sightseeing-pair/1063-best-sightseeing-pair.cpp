class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v) {
        int n=v.size();
        int ans=INT_MIN;
        int val=v[0];
        for(int i=1;i<n;i++){
            int jp=v[i]-i;
            ans=max(ans,val+jp);
            val=max(val,v[i]+i);
        }
        return ans;

    }
};