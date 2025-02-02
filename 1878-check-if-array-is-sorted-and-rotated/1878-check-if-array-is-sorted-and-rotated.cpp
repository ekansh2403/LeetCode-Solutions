class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>sorted(nums.size());
        int n=nums.size();
        for(int r=0;r<=n;r++){
            int idx=0;
            for(int i=r;i<n;i++){
                sorted[idx]=nums[i];
                idx++;
            }
            for(int i=0;i<r;i++){
                sorted[idx]=nums[i];
                idx++;
            }
            bool flag=true;
            for(int i=0;i<n-1;i++){
                if(sorted[i]>sorted[i+1]){
                    flag=false;
                    break;
                }
            }
            if(flag) return true;

        }
        return false;
    }
};