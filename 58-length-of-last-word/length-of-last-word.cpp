class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<string> st;
        int n = s.size();
        string temp;
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                temp += s[i];
            } else {
                if (!temp.empty()) {
                    st.push(temp);
                    temp = "";
                }
            }
        }
        if (!temp.empty())
            st.push(temp);
        return st.top().size();
    }
};