class Solution {
public:
    
    int numberOfSubstrings(string s, int k) {
        int n=s.length();
        int cnt=0;
        if(k==1){
            return n*(n+1)/2;
        }
        
        for(int i=0;i<n;i++){
                unordered_map<char,int>mpp;
            for(int j=i;j<n;j++){
                mpp[s[j]]++;

                bool flag=false;
                for(auto it:mpp){
                    if(it.second>=k){
                        flag=true;
                        break;
                    }
                }
                if(flag) cnt++;
                else continue;
            }
        }
        
        return cnt;
      

    }
};