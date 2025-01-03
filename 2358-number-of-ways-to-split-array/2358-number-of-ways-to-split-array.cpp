class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        for(auto &it:nums){
            sum+=it;
        }
        long long lsum=0,rsum=0;
        int ans=0;
        for(int i=0;i<n-1;i++){
             lsum+=nums[i];
             rsum=sum-lsum;
             if(lsum>=rsum) ans++;
        }
        return ans;
    }
};