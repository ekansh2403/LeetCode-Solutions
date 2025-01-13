class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> mpp;
        int del=0;
        for (auto& ch : s) {
            mpp[ch]+=1;
            if(mpp[ch]==3){
                mpp[ch]-=2;
                del+=2;
            }
        }
        return s.size()-del;
        
        
    }
};