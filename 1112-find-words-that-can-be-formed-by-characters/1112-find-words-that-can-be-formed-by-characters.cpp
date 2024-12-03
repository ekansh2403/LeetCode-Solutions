class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        vector<int>freq(26,0);
        for(auto it:chars){
            freq[it-'a']++;
        }
        for(auto it:words){
            vector<int>tempF(26,0);
            for(auto ch:it){
                tempF[ch-'a']++;
            }

            bool flag=true;
            for(int i=0;i<26;i++){
                if(tempF[i]>freq[i]){
                    flag=false;
                    break;
                }
            }
            if(flag) ans+=it.length();

        }
        return ans;
    }
};