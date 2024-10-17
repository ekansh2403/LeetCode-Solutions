class Solution {
public:
using ll=long long;
    int bulbSwitch(int n) {
        // return sqrt(n);
         int cnt=0;
        for(ll i=1;i<=n;i++){
            if(i*i<=n){
                cnt++;
            }
        }
        return cnt;
    }
};