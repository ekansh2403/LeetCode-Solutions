class Solution {
public:
    bool isCircularSentence(string s) {
        // int n=s.size();
        
        // if(s[0]!=s[n-1]) return false;

        // for(int i=0;i<n;i++){
        //     if(s[i]==' '){
        //         if(s[i-1]!=s[i+1]){
        //             return false;
        //         }
        //     }
        // }
        // return true;

        stringstream ss(s);
        string token;
        vector<string>ans;
        while(ss>>token){
            ans.push_back(token);
        }
        int n=ans.size();
        if(ans[0].front()!=ans[n-1].back()){
            return false;
        }
        char last=ans[n-1].back();
        for(int i=0;i<n;i++){
            if(ans[i].front()!=last) return false;
            last=ans[i].back();
        }
        return true;

    }
};