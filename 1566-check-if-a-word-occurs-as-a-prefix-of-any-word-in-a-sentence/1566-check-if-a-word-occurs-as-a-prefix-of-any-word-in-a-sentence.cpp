class Solution {
public:
    bool isPrefix(string str,string word){
        return str.substr(0,word.size())==word;
    }
    int isPrefixOfWord(string s, string w) {

        stringstream ss(s);
        string token;

        vector<string>word;

        while(ss>>token){
            word.push_back(token);
        }

        int n=word.size();
        
        int ans=-1;
       
        for(int i=0;i<n;i++){
           if(isPrefix(word[i],w)){
                ans=i+1;
                break;
           }
        }
        
        return ans;
    }
};