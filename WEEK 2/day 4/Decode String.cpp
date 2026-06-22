class Solution {
public:
    string decodeString(string s) {
        stack<int> numstack;
        stack<string> strstack;
        int num = 0;
        string ans = "";
        for(int j=0;j<s.size();j++){
            if(isdigit(s[j])){
                num = num*10+(s[j] - '0');
            }
            else if(s[j] == '['){
                numstack.push(num);
                strstack.push(ans);
                num = 0;
                ans = "";
            }
            else if(s[j] == ']'){
                int n1 = numstack.top();
                numstack.pop();
                string s1 = strstack.top();
                strstack.pop();
                string temp = "";
                for(int i=0;i<n1;i++){
                    temp+=ans;
                }
                ans=s1+temp;
            }
            else{
                ans+=s[j];
            }
        }
        return ans;
    }
};
