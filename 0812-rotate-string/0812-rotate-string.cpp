class Solution {
public:
    bool rotateString(string s, string goal) {
        // int n=s.size();
        // for(int i=0;i<n;i++){
        //         s=s.substr(1)+s[0];
        //         if(s==goal){
        //             return true;
        //         }
          
        // }
        // return false;
        if(s.size()!=goal.size()) return false;
        string ans=s+s;
        if(ans.find(goal)!=string::npos){
            return true;
        }
        return false;
    }
};