class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        vector<int>ss1(26,0);
        vector<int>ss2(26,0);

        int cnt=0;

        for(int i=0;i<s1.size();i++){
            ss1[s1[i]-'a']++;
            ss2[s2[i]-'a']++;

            if(s1[i]!=s2[i]){
                cnt++;
                if(cnt>2) return false;
            }

        }

        for(int i=0;i<26;i++){
            if(ss1[i]!=ss2[i]) return false;
        }

        return true;

    }
};