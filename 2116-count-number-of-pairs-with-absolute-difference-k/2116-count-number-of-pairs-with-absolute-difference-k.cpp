class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int cnt=0;
        for(auto &it:nums){
            cnt+=mpp[it-k];
            cnt+=mpp[it+k];
            mpp[it]++;
        }
        return cnt;
    }
};