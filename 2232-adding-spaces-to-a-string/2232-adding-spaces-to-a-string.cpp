class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        // string ans;
        stringstream res;
        int idx=0;
        for(int i=0;i<s.length();i++){
            if(idx<spaces.size() && i==spaces[idx]){
                // ans+=" ";
                res<<" ";
                idx++;
            }
            // ans+=s[i];
            res<<s[i];
        }
        // return ans;
        return res.str();
    }
};