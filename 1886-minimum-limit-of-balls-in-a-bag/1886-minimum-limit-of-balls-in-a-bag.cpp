class Solution {
public:
    int minimumSize(vector<int>& nums, int mo) {
       int l=1;
       int r=*max_element(nums.begin(),nums.end());
       int res=r;

       while(l<=r){
            int mid=l+(r-l)/2;
            if(isPossible(nums,mo,mid)){
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }

       }
       return res;

    }
    bool isPossible(vector<int>&nums,int mo,int mid){
        int tot=0;
        for(auto it:nums){
            int ops=it/mid;
            if(it%mid==0){
                ops-=1;
            }
            tot+=ops;
        }
        if(tot>mo) return false;
        return true;
    }
};