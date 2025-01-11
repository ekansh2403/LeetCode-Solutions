class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k) return false;
        else if (s.size()==k) return true;
        vector<int>arr(26,0);
        for(auto &ch:s){
            arr[ch-'a']++;
        }
        int cnt=0;
        for(auto &it:arr){
            if(it%2!=0) cnt++;
        }
        return cnt<=k;
    }
};