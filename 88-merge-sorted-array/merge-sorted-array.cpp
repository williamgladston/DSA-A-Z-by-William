class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s = 0,e = 0;
        vector<int> ans;
        while (s < m && e < n) {
            if (nums1[s] == nums2[e]) {
                ans.push_back(nums1[s]);
                s++;
                ans.push_back(nums2[e]);
                e++;
            } else if (nums1[s] > nums2[e]) {
                ans.push_back(nums2[e]);
                e++;
            } else {
                ans.push_back(nums1[s]);
                s++;
            }
        }
        if (s < m) {
            for (int i = s; i < m; i++) {
                ans.push_back(nums1[i]);
            }
        }
        if (e < n) {
            for (int i = e; i < n; i++) {
                ans.push_back(nums2[i]);
            }
        }
        nums1 = ans;
    }
};