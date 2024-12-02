class Solution {
public:
    bool allZero(unordered_map<char,int>&mpp){
        for(auto &it:mpp){
            if(it.second!=0) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mpp;
        for(auto &ch:p){
            mpp[ch]++;
        }

        int i=0,j=0;
        vector<int>ans;
        int n=s.size();
        int patSize=p.length();
        while(j<n){
            mpp[s[j]]--;
            int winSize=j-i+1;
            if(winSize==patSize){
                if(allZero(mpp)){
                    ans.push_back(i);
                }
                mpp[s[i]]++;
                i++;
            }
            j++;
        }
        return ans;
    }
};