class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n = strs.size();
       if(n==0)return "";
       int cnt = strs[0].size();
       for(int i = 1 ; i < n ;i++){
            if(strs[i].size()<cnt)cnt=strs[i].size();
            int temp=0;
            for(int j = 0 ; j < cnt ;j++){
                if(strs[0][j]==strs[i][j])temp++;
                else{
                    cnt=temp;
                    break;
                }
            }
       }
       string ans;
       for (int i = 0 ; i < cnt ;i++){
        ans+=strs[0][i];
       } 
       return ans;
    }
};