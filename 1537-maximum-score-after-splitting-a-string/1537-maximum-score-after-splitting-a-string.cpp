class Solution {
public:
    int maxScore(string s) {
        //brute force 
        //har ek index  pe break karo phir count nikal lo 
        //left substr mein zero ka and right mein one ka cnt
        //sum kar lo cnts ka phir max nikal lo 

        int n=s.size();
        
        int sum=INT_MIN;
      for(int i=0;i<=n-2;i++){
            //zero ka count
            int cnt0=0,cnt1=0;
            for(int j=0;j<=i;j++){
                if(s[j]=='0'){
                    cnt0++;
                }
            }
            for(int k=i+1;k<n;k++){
                if(s[k]=='1'){
                    cnt1++;
                }
            }
            sum=max(sum,cnt1+cnt0);
      }
        return sum;
    }
};