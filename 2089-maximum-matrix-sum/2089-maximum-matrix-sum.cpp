class Solution {
public:
using ll =long long;
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        //1. find the absolute sum of the whole matrix
        //2. then check for the cnt of negative number 
                //if it is odd then sum-2*smallest neg number
                // if it is even then sum is the ans

        ll cnt=0;
        ll sum=0;
        int n=matrix.size();
        int small=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=abs(matrix[i][j]);
                if(matrix[i][j]<0){
                    cnt++;
                }
                if(abs(matrix[i][j])<small){
                    small=abs(matrix[i][j]);
                }
                // small=min(small,abs(matrix[i][j]));

            }
        }
        if(cnt%2==0) return sum;
        return sum-2*small;

        
    }
};