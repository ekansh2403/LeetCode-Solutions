class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //Sliding Window 
        //if we get sum >= target then we will find smallest length by shrinking window 
        int minLen=INT_MAX;
        int i=0,j=0;
        int sum=0;
        int n =nums.size();
        while(j<n){
            sum+=nums[j];

            //Window ko chota karto chalo jab cond satisfied hai
            while(sum>=target){
                int winSize=j-i+1;
                minLen=min(minLen,winSize);
                sum-=nums[i];
                i++;

            }
            j++;
        }
        return minLen==INT_MAX?0:minLen;

    }
};