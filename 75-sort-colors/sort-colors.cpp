class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int s = 0, e = 0;
        while (s <= e && e < n && n>1) {
            if (nums[s] == 0){
                s++;
                e++;
            }
            else if (nums[e] == 0) {
                swap(nums[e], nums[s]);
                s++;
                e++;
            }
            else{
                e++;
            }
        }
        e = s;
        while (s <= e && e < n) {
            if (nums[s] == 1)
                {s++;
                e++;}
            else if (nums[e] == 1) {
                swap(nums[e], nums[s]);
                s++;
                e++;
            }
            else{
                e++;
            }
        }
    }
};