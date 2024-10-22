class Solution {
public:
    int countSegments(string s) {
        // stringstream ss(s);
        // string token;
        // int cnt=0;
        // while(ss>>token) cnt++;
        // return cnt;

        //Approach 2
        int cnt=0;
        int n=s.length();

        for(int i=0;i<n;i++){
            if(s[i]!=' '&&(i==n-1||s[i+1]==' ')){
                cnt++;
            }
        }
        return cnt;

    }
};