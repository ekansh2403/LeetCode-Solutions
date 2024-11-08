class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()==k) return "0";
        stack<char>st;
        int n=num.size();
        for(int i=0;i<n;i++){
          
            while(!st.empty()&&k>0&&st.top()-'0'>num[i]-'0'){
                st.pop();
                k--;

            }
            st.push(num[i]);
        }
        while(k>0){
            st.pop();
            k--;
        } 
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        ans.erase(0, ans.find_first_not_of('0'));
        return (ans.empty()?"0":ans);

    }
};