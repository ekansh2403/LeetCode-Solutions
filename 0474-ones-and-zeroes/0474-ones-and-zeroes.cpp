class Solution {
public:
using vi=vector<int>;
using vvi=vector<vi>;
using vvvi=vector<vvi>;

    void count(string str,int &c0,int &c1){
        for(auto it:str){
            if(it=='0') c0++;
            else c1++;
        }

    }

    int dp(vector<string>&strs,int n,int z,int o,vvvi &memo){
        //base
        if(n==0) return 0;
        if(z==0&&o==0) return 0;

        //take / not take
        if(memo[n][z][o]!= -1){
            return memo[n][z][o];
        }
        int take=0,notTake=0;
        int c0=0,c1=0;
        count(strs[n-1],c0,c1);

        if(c0<=z&&c1<=o){
            take=1+dp(strs,n-1,z-c0,o-c1, memo);
        }
        notTake=dp(strs,n-1,z,o,memo);

        return memo[n][z][o]=max(take,notTake);

    }

    
    int findMaxForm(vector<string>& strs, int z, int o) {
        int n=strs.size();
        vvvi memo(n+1,vvi(z+1,vi(o+1,-1)));
        return dp(strs,n,z,o,memo);
    }
};