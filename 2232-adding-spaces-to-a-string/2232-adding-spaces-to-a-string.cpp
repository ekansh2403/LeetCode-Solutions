class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int idx=0;
        string res;
        for(int i=0;i<s.size();i++){
            if(idx<spaces.size()&&i==spaces[idx]){
                 res+=' ';
                 ++idx;
            }
            res+=s[i];
        }
        return res;
    }
};