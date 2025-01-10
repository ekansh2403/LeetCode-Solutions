class Solution {
public:
    bool valid(unordered_map<char,int>&mpp,unordered_map<char,int>&temp){
        for(auto it:mpp){
            auto ch=it.first;
            auto freq=it.second;
            if(temp[ch]<freq){
                return false;
            }
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& w1, vector<string>& w2) {
        vector<string>ans;
        unordered_map<char,int>mpp;
        for(auto &ch:w2){
            unordered_map<char,int>temp;
            for(int i=0;i<ch.size();i++){
                temp[ch[i]]++;
                mpp[ch[i]]=max(temp[ch[i]],mpp[ch[i]]);
            }
        }

        for(auto &ch : w1){
            unordered_map<char,int>temp;
            for(auto &it:ch){
                temp[it]++;
            }
            if(valid(mpp,temp)){
                ans.push_back(ch);
            }
        }

        
        return ans;
        
    }
};