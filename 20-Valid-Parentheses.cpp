class Solution {
public:
bool isValid(string s) {
    stack<char>st;
    bool f = false;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '(' || s[i] == '['  || s[i] == '{' ){
            st.push(s[i]);
            f = true;
        }else{
            if(!st.empty()){
                if(st.top() == '(' && s[i] == ')'  ){
                st.pop();
                continue;
                 }
                if(st.top() == '[' && s[i] == ']'  ){
                    st.pop();
                    continue;
                 }if(st.top() == '{' && s[i] == '}'  ){
                    st.pop();
                    continue;
                }
                else{
                return false;
                }
                }
            else{
                return false;
            }
        }
    }
    if(st.empty() && f)
        return true;
    return false;
}
};