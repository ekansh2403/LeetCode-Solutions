class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      int n=arr.size();
      unordered_map<int,int>mpp;
      for(auto it:arr){
        mpp[it]++;
      }
      for(auto it:arr){
        if(it==0){
            if(mpp[it]>1) return 1;
        }
        else if(mpp.count(it*2)){
            return 1;
        }
      }
      return 0;
    }
};