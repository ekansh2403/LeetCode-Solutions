class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();

        deque<int> deq; 
        vector<int> result;

        for(int j = 0; j < n; j++) {

            if(deq.size() == k) {
                deq.pop_front(); //deq ka size ab k-1, ab jth element ko hum insert karne ka soch sakte hain deque me
            }

            if(!deq.empty() && deq.back() != nums[j]-1) {
                deq.clear();
            }

            deq.push_back(nums[j]);

            if(j >= k-1) {
                if(deq.size() == k) {
                    result.push_back(deq.back());
                } else {
                    result.push_back(-1); 
                }
            }
        }

        return result;
    }
};