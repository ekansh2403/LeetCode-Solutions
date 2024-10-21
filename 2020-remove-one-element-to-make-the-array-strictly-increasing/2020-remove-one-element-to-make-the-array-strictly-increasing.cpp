class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;  // To count the number of violations
        
        for (int i = 1; i < n; i++) {
            if (nums[i] <= nums[i - 1]) {
                cnt++;
                if (cnt > 1) return false;  // More than one violation
                
                // Check if removing nums[i-1] or nums[i] will fix the issue
                if (i > 1 && nums[i] <= nums[i - 2] && i < n - 1 && nums[i + 1] <= nums[i - 1]) {
                    return false;  // Neither removal works, so return false
                }
            }
        }
        
        return true;
    }
};
