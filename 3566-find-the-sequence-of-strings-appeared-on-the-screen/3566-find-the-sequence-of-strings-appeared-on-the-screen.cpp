class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>ans;
        string curr="";
        int n =target.length();
        
        for(auto it:target){
            curr+='a';
            ans.push_back(curr);
            while(curr.back()<it){
                curr.back()++;
                ans.push_back(curr);
            }
            
        }
        return ans;
    }
};