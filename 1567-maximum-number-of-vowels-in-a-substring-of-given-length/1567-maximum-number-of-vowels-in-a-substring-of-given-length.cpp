class Solution {
public:
    int maxVowels(string s, int k) {
        string vowel="aeiou";
        int i=0,j=0;
        int cnt=0;
        int ans=0;
        int n=s.length();
        while(j<n){
            if(vowel.find(s[j])!=string::npos){
                cnt++;
            }
            if(j-i+1==k){
                ans=max(ans,cnt);
                if(vowel.find(s[i])!=string::npos){
                     cnt--;
                }
                    i++;
            }
            j++;
        }
        return ans;
    }
};