class Solution {
public:
bool check(vector<int>&piles,int k,int h){
    long long t=0;
    for(auto it:piles){
        t+=(it+k-1)/k;

    }
    return t<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int high=1e9;
        int ans;
        while(l<=high){
            int m=l+(high-l)/2;

            if(check(piles,m,h)){
                ans=m;
                high=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
};