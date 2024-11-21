class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();

        int l=0;
        int h=n-1;
        while(l<h){
            int mid=l+(h-l)/2;
            bool even;
            if((h-mid)%2==0){
                even=true;
            }
            else even=false;

            if(nums[mid]==nums[mid+1]){
                if(even){
                    l=mid+2;
                }
                else{
                    h=mid-1;
                }
            }
            else{
                if(even){
                    h=mid;
                }
                else{
                    l=mid+1;
                }
            }
        } 
        return nums[h];
    }
};