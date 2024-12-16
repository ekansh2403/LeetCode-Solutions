class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int mul) {
        // vector<int>temp=nums;
        
        // while(k-->0){
        //     auto it=min_element(temp.begin(),temp.end());
        //     *(it)=*(it)*mul;
        // }
        // return temp;

        //Treating a vector as a heap 
        vector<pair<int,int>>arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        make_heap(arr.begin(),arr.end(),greater<>());//now arr will act as min heap
        while(k-->0){
            pop_heap(begin(arr),end(arr),greater<>());
            auto temp=arr.back();
            arr.pop_back();
            int idx=temp.second;
            int val=temp.first;
            nums[idx]=val*mul;
            arr.push_back({nums[idx],idx});
            push_heap(arr.begin(),arr.end(),greater<>());
        }
        return nums;
    }
};