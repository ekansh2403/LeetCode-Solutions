class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.length();
        int i=2;
        char ans=' ';
        while(i<n){
            if(num[i]==num[i-1]&&num[i]==num[i-2]){
                ans=max(ans,num[i]);
            }
            i++;
        }

        return (ans==' ')?"":string(3,ans);
    }
};