class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int needed = target;
        multimap<int, int> map;
        for (int i = 0; i < nums.size()-1; i++) {
            needed = target - nums[i];
            map.emplace(nums[i], i);
            if(map.find(needed)!=map.end()) {
                if(map.find(needed)->second!=i){
                    return {map.find(needed)->second,i};
                }
            }
        }
    }
};