class Solution {
public:
bool isSorted(vector<int>&nums){
    for(int i=1;i<nums.size();i++){
        if(nums[i]<=nums[i-1]) return false;
    }
    return true;
}
    bool canBeIncreasing(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
                vector<int>temp;
            for(int j=0;j<n;j++){
                if(i!=j) temp.push_back(nums[j]);
            }
            if(isSorted(temp)) return true;
        }
        return false;
    }
};