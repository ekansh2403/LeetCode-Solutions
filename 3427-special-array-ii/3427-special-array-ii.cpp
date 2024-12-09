class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
         int n = nums.size();
    vector<int> prefix_same_parity(n, 0);
       for (int i = 0; i < n - 1; ++i) {
        if (nums[i] % 2 == nums[i + 1] % 2) {
            prefix_same_parity[i + 1] = 1;
        }
        prefix_same_parity[i + 1] += prefix_same_parity[i];
    }
       vector<bool> answer;
    for (const auto& query : queries) {
        int from = query[0];
        int to = query[1];
        
        
        int same_parity_count = prefix_same_parity[to] - (from == 0 ? 0 : prefix_same_parity[from]);
        answer.push_back(same_parity_count == 0);
    }
    
    return answer;
    }
};