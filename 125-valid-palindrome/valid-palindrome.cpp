class Solution {
public:
    bool isPalindrome(string s) {
        string pal;
        for(char c : s){
            if(!isalnum(c)){
                continue;
            }
            else{pal+=tolower(c);}
            
        }
        int f = 0 ;
        int e = pal.size()-1;
        while(f<e){
            if(pal[f]!=pal[e])return false;
            else{
                f++;
                e--;
            }
        }
        return true;
    }
};