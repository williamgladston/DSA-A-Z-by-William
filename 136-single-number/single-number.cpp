class Solution {
public:
    int singleNumber(vector<int>& nums) {
        multiset <int> st;
        int ans = 0;
        for(int i = 0 ; i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(int j = 0 ; j < nums.size(); j++){
            if(st.count(nums[j])==1){
                ans = nums[j];
            }
        }
        return ans;
    }
};