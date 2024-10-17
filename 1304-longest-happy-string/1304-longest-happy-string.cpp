class Solution {
public:
using pic=pair<int,char>;
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pic>pq;
        if(a>0) pq.push({a,'a'});
        if(b>0) pq.push({b,'b'});
        if(c>0) pq.push({c,'c'});

        string ans="";

        while(!pq.empty()){
            int currCnt=pq.top().first;
            char currCh=pq.top().second;
            pq.pop();
            if(ans.length()>=2&&ans[ans.length()-1]==currCh&&ans[ans.length()-2]==currCh){
                //push nhi kar sakte aaa, bbb, ccc
                if(pq.empty()) break;
                int nextCnt=pq.top().first;
                char nextCh=pq.top().second;
                pq.pop();
                ans.push_back(nextCh);
                nextCnt--;
                if(nextCnt>0){
                    pq.push({nextCnt,nextCh});
                }
            }
            else{
                ans.push_back(currCh);
                currCnt--;
               
            }
             if(currCnt>0){
                    pq.push({currCnt,currCh});
                }
        }

        return ans;

    }
};