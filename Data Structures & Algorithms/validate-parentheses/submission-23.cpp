class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(char c : s) {
            if(c == '[' || c == '{' || c == '(') {
                p.push(c);
                continue;
            } else {
                if(!p.size()) return false;
                if(c == ']') {
                    if(p.top() == '['){
                        p.pop();
                        continue;
                    }
                }
                if(c == '}') {
                    if(p.top() == '{') {
                        p.pop();
                        continue;
                    }
                }
                if(c == ')') {
                    if(p.top() == '(') {
                        p.pop();
                        continue;
                    }
                }
                return false;
            }
        }
        if(p.size()) return false;
        return true;
    }
};
