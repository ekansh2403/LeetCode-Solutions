class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int>mpp;
        for(auto ch:s){
            mpp[ch]++;
        }
         auto comp = []( pair<int, char>& a,  pair<int, char>& b) {
            if (a.first == b.first) {
                return a.second > b.second; 
            }
            return a.first < b.first; 
        };
        priority_queue<pair<int,char>,vector<pair<int, char>>,decltype(comp)>pq;
        for(auto it:mpp){
            pq.push({it.second,it.first});
        }
        while(!pq.empty()){
            int val=pq.top().first;
            while(val--){
            ans+=pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};