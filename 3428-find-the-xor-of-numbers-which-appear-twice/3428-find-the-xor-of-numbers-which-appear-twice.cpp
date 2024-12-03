class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto &it:nums){
            mpp[it]++;
        }
        int ans=0;
        for(auto it:mpp){
            if(it.second==2){
                ans^=it.first;
            }
        }
        return ans;
    }
};