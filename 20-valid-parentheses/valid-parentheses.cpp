class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        if(s.empty()) return 1;
        if (n % 2 != 0) {
            return 0;
        }
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty())
                    return 0;
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') || (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return 0;
                }
            }
        }
        return st.empty();
    }
};