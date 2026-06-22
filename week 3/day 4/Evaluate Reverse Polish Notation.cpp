class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        int ans = 0;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                ans = a+b;
                st.push(ans);
            }
            else if(tokens[i] == "-"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                ans = b-a;
                st.push(ans);
            }
            else if(tokens[i] == "*"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                ans = a*b;
                st.push(ans);
            }
            else if(tokens[i] == "/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                ans = floor(b/a);
                st.push(ans);
            }
            else{
                int p = stoi(tokens[i]);
                st.push(p);
            }
        }
        return st.top();
    }
};
