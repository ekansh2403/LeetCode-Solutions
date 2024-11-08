class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int mx) {
        //Things we have to do in this is 
        //Find a k less than 2^maxmBit
        //we have nums.size() query
        //for each query find the maximum xor of all the elemnts ^ k
        //find tha value of k < 2^maxmBit 
        //then remove the last element
        int n=nums.size();
        vector<int>ans;
        
         int maxK = (1 << mx)-1;

       int currXor=0;
       for(auto it:nums){
            currXor^=it;
       }
    //    for(int i=0;i<n;i++){
    //         int res=0;
    //         int bestK=0;
    //         for(int k=0;k<maxK;k++){
    //             int xorRes=currXor^k;
    //             if(xorRes>res){
    //                 bestK=k;
    //                 res=xorRes;

    //             }
    //         }
    //         ans[i]=bestK;
    //         currXor^=nums.back();
    //         nums.pop_back();
    //    } 
    //    return ans;
    for(int i=n-1;i>=0;i--){
        ans.push_back(currXor^maxK);
        currXor^=nums[i];
        // nums.pop_back();
        
    }
    return ans;

        
    }
};