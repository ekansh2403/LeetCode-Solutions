class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      int n=arr.size();
    //   unordered_map<int,int>mpp;
    //   for(auto it:arr){
    //     mpp[it]++;
    //   }
    //   for(auto it:arr){
    //     if(it==0){
    //         if(mpp[it]>1) return 1;
    //     }
    //     else if(mpp.count(it*2)){
    //         return 1;
    //     }
    //   }
    //   return 0;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&arr[i]==2*arr[j]){
                return 1;
            }
        }
      }
      return 0;
    }
};