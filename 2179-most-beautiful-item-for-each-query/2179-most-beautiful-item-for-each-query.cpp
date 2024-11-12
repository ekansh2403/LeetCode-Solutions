class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& q) {
        // i have custom sorted the items  
        sort(items.begin(),items.end(),[](vector<int>&a,vector<int>&b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            return a[0]<b[0];
        });

        //change the other beauty with the with maximum beauty
        int mxb=items[0][1];
        int n=items.size();
        for(int i=0;i<n;i++){
           mxb=max(mxb,items[i][1]);
           items[i][1]=mxb;
        }

//   for (const auto& it : items) {
//         for (int i : it) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }

        vector<int>res;
        int m=q.size();
        for(int i=0;i<m;i++){
            // int l=0;
            // int r=n-1;
            // int ans=0;
            // while(l<=r){
            //     int mid=r+(l-r)/2;
            //     if(items[mid][0]<=q[i]){
            //         ans=max(ans,items[mid][1]);
            //         l=mid+1;
            //     }
            //     else{
            //         r=mid-1;
            //     }
            // }
            // res.push_back(ans);
            auto  ub=upper_bound(items.begin(),items.end(),vector<int>{q[i],0}, [](const vector<int>& a, const vector<int>& b) {
                          return a[0] < b[0];
                      });

                if(ub!=items.begin()){
                    --ub;
                    res.push_back((*ub)[1]);

                }
                else{
                    res.push_back(0);
                }
            

        }
        return res;
        
    
        
    }
};