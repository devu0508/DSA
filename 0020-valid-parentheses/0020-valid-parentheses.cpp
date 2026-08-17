class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int n = s.size();
        for(int i=0;i<n;i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
                continue;
            }
            if(st.empty()){
                return false;
            }
            if(s[i]== ')' && st.top() == '('){
                st.pop();
                continue;
            }
            if(s[i]== '}' && st.top() == '{'){
                st.pop();
                continue;
            }
            if(s[i]== ']' && st.top() == '['){
                st.pop();
                continue;
            }
                return false;
        }
        return st.empty();
        
    }
};