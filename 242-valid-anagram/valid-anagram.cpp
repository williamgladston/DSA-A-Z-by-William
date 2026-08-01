class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1 ,mp2;
        int n1 = s.size();
        int n2 = t.size();
        if(n1!=n2)return false;
        for(int i = 0 ; i < n1;i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        return mp1==mp2;
    }
};