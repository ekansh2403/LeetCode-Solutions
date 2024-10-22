class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        string ans;
        for(auto &it:s){
            if(!st.empty()&&st.top().first==it){
                st.top().second++;
            }
            else{
                st.push({it,1});
            }
            if(st.top().second==k){
                st.pop();
            }
        }
        while(!st.empty()){
            char ch=st.top().first;
            int val=st.top().second;
            ans.append(val,ch);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};