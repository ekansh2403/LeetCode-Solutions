class Solution {
public:
    string flip(string s){
        for (int i = 0; i < s.size(); i++) {
            s[i] = (s[i] == '0') ? '1' : '0'; 
        }
        return s;
    }
    
    char findKthBit(int n, int k) {
        string ans="0";
        for(int i=1;i<n;i++){
            string adds=flip(ans);
            reverse(adds.begin(),adds.end());
            ans=ans+"1"+adds;


        }
        return ans[k-1];
    }
};