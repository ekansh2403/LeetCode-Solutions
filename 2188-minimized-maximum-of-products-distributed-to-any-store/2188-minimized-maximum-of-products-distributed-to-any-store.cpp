class Solution {
public:
bool solve(int x,vector<int>&q,int s){
    for(auto it:q){
        s-=(it+x-1)/x;
        if(s<0) return false;

    }
    return true;
}
    int minimizedMaximum(int n, vector<int>& q) {
        int m=q.size();
        int l=1;
        int r=*max_element(q.begin(),q.end());
        int res=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(solve(mid,q,n)){
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};