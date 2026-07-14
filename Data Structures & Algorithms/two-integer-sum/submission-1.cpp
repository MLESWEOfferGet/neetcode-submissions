class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> Map;// hash table
        for (int i = 0; i < nums.size(); i++){
            int dif = target - nums[i];
            
            // find value in hash table
            if (Map.find(dif) != Map.end()){
                return {Map[dif], i};
            }
            Map.insert({nums[i], i});
        }
        return {};
    }
};
