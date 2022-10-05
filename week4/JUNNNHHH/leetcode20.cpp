class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        
        for(int i=0; i<s.size(); i++) {
            if(s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if(stk.empty()) return false;
                else {
                    if(s[i] == ')' && stk.top() == '(') stk.pop();
                    else if(s[i] == '}' && stk.top() == '{') stk.pop();
                    else if(s[i] == ']' && stk.top() == '[') stk.pop();
                    else return false;
                }
            } else {
                stk.push(s[i]);
            }
        }
        
        return stk.empty() ? true : false;
    }
};
