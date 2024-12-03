class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        vector<int>freq(26,0);
        for(auto &ch:chars){
            freq[ch-'a']++;
        }

        for(auto &word:words){
            vector<int>temp(26,0);
            for(auto &ch:word){
                temp[ch-'a']++;
            }
            bool flag=true;
            for(int i=0;i<26;i++){
                if(temp[i]>freq[i]){
                    flag=false;
                    break;
                }
            }
            if(flag) ans+=word.size();
        }
        return ans;
    }
};