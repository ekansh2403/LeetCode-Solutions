class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& ev) {
      int idx=ev[0][0];
      int time=0;

      for(int i=0;i<ev.size();i++){

            int currtime=(i==0)?ev[i][1]:ev[i][1]-ev[i-1][1];
            if(currtime>time||(currtime==time&&ev[i][0]<idx)){
                time=currtime;
                idx=ev[i][0];
            }
        }
        return idx;
    }
};