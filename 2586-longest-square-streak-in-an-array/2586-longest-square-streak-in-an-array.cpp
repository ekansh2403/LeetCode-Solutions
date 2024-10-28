class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int,int>mpp;
        sort(nums.begin(),nums.end());
        int ans=0;
        for(auto it :nums){
            int sqroot=(int)sqrt(it);
            if(sqroot*sqroot==it&& mpp.find(sqroot)!=mpp.end()){
                mpp[it]=mpp[sqroot]+1;

            }
            else {
                mpp[it]=1;
            }
            ans=max(ans,mpp[it]);
        }
        return (ans<2?-1:ans);
    }
};