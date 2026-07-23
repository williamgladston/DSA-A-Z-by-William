class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int cnt = 0;
        vector<int> temp;
        for(int it : temp){
            cout<<it;
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] != val) {
                temp.push_back(nums[i]);
            } else {
                cnt++;
            }
        }
        for(int it : temp){
            cout<<it;
        }
        nums = temp;
        return n-cnt;
    }
};