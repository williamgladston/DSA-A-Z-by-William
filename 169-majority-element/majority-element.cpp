class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>hash_map;
        for(int i = 0 ; i < n ; i++){
            hash_map[nums[i]]++;
        }
        for(auto it :hash_map){
            if(it.second > n/2)return it.first;
        }
        return 0;
    }
};