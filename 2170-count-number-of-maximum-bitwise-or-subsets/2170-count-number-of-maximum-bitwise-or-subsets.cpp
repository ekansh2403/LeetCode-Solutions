class Solution {
public:
    int subsets(int idx,int currOr,vector<int>&nums,int maxmOr){
        if(idx==nums.size()){
            if(currOr==maxmOr){
                return 1;
            }
            return 0;
        }
        //take 
        int takeCnt=subsets(idx+1,currOr|nums[idx],nums,maxmOr);

        //Not take
        int notCnt=subsets(idx+1,currOr,nums,maxmOr);

        return takeCnt+notCnt;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxmOr=0;
        for(auto it:nums){
            maxmOr|=it;
        }
        int currOr=0;
        return subsets(0,currOr,nums,maxmOr);
    }
};