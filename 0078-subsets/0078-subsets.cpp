class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        int m =(1<<n);
        for(int mask=0;mask<m;mask++){
            vector<int>temp;
            for(int i=0;i<n;i++){
                if((1<<i)&mask) temp.push_back(nums[i]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};