class Solution {
public:
    int fun(vector<int>& nums,int k,int op1,int op2,int n,vector<vector<vector<int>>>&dp){
        //base case
        int v1=INT_MAX;
        int v2=INT_MAX;
        int v3=INT_MAX;
        int v4=INT_MAX;
        int v5=INT_MAX;
        if(n==0) return 0;
        if(dp[n][op1][op2]!=-1) return dp[n][op1][op2];

        if(op1){
             v1=(nums[n-1]+1)/2+fun(nums,k,op1-1,op2,n-1,dp);
        }
         if(op2&&nums[n-1]>=k){
            
                 v2=nums[n-1]-k+fun(nums,k,op1,op2-1,n-1,dp);
            
        }
         if(op1&&op2){
            //op1 ke baad op2
            if((nums[n-1]+1)/2>=k){
            v3=((nums[n-1]+1)/2)-k+fun(nums,k,op1-1,op2-1,n-1,dp);
            }
             
        }
        if(op1&&op2&&nums[n-1]>=k){
            v4=((nums[n-1]-k+1)/2)+fun(nums,k,op1-1,op2-1,n-1,dp);
        }
        int temp=min(v3,v4);
        v5=nums[n-1]+fun(nums,k,op1,op2,n-1,dp);
        return dp[n][op1][op2]= min({v1,v2,temp,v5});
        



    }
    int minArraySum(vector<int>& nums, int k, int op1, int op2) {
        int n=nums.size();
        
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(op1+1,vector<int>(op2+1,-1)));
        return fun(nums,k,op1,op2,n,dp);


    }
};