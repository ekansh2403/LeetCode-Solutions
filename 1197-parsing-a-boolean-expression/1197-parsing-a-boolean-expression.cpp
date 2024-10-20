class Solution {
public:
char opFun(vector<char>&curr,char op){
    if(op=='|'){
        for(auto it:curr){
            if(it=='t') return 't';
        }
        return 'f';
    }
    else if(op=='&'){
        for(auto it:curr){
            if(it=='f') return 'f';
        }
        return 't';
    }
    else if(op=='!'){
        return (curr[0]=='t')? 'f':'t';
    }
    return 't';
}
    bool parseBoolExpr(string s) {
        int n=s.length();
        stack<char>st;
        for(auto it:s){
            if(it==',') continue;
            if(it==')'){
                vector<char>curr;
                while(st.top()!='('&&!st.empty()){
                    curr.push_back(st.top());
                    st.pop();
                }
                st.pop();//yeh wala us open bracket ko pop karane ke liye
                char op=st.top();
                st.pop();
                st.push(opFun(curr,op));
            }
            else st.push(it);
        }

        return (st.top()=='t')? true:false;

    }
};