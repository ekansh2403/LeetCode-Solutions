class Solution {
public:
    int maximumSwap(int num) {
        string str=to_string(num);
        int n=str.length();
        int maxm=num;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(str[i],str[j]);
                maxm=max(maxm,stoi(str));
                swap(str[i],str[j]);
            }
        }
        return maxm;
    }
};