class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        string ans;
        int s=0 ,e=0;
        while(s<n1 && e<n2){
            ans += word1[s];
            s++;
            ans += word2[e];
            e++;
        }
        if(s<n1){
            for(int i = s ; i < n1;i++){
                ans += word1[i];
            }
        }
        if(e<n2){
            for(int i = e ; i < n2;i++){
                ans += word2[i];
            }
        }
        return ans;
    }
};