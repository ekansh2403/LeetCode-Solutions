class Solution {
public:
    struct custom{
        bool operator()(pair<char,int>a,pair<char,int>b){
            return a.first<b.first;
        }
    };
    string repeatLimitedString(string s, int rl) {
       unordered_map<char,int>mpp;
       for(auto it:s){
            mpp[it]++;
       } 
       priority_queue<pair<char,int>,vector<pair<char,int>>,custom>pq;
       for(auto it:mpp){
        pq.push({it.first,it.second});
       }
        string ans;
        int diff;
        while(!pq.empty()){

            auto top1=pq.top();
            pq.pop();
            int freq=min(top1.second,rl);
            ans.append(freq,top1.first);
            top1.second-=freq;
            if(top1.second>0){
                if(pq.empty()) break;
                auto top2=pq.top();
                pq.pop();
                ans.push_back(top2.first);
                top2.second--;

                if(top2.second>0) pq.push({top2.first,top2.second});
                pq.push({top1.first,top1.second});

            }


        }
        return ans;
       
    }
};