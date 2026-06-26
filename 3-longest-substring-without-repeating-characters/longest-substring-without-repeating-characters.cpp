class Solution {
public:
//new code
    int lengthOfLongestSubstring(string str) {
        int n = str.size();
        int maxcnt = 0;
        int e = 0, s = 0;
        unordered_set<char> st;
        while (e < n) {
            // check if the character is already present in the set or not
            // this is the time to shrink the window
            while (s <= e && st.find(str[e]) != st.end()) {
                st.erase(str[s]);
                s++;
            }
            maxcnt = max(maxcnt, e - s + 1);
            st.insert(str[e]);
            e++;
        }
        return maxcnt;
    }
};