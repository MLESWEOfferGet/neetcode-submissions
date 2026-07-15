class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = nums[0];
        int curr_min = 1, curr_max = 1;

        for (int num: nums){
            int tmp = curr_max * num;
            curr_max = max(max(num * curr_max, num * curr_min), num);
            curr_min = min(min(tmp, num * curr_min), num);
            maxP = max(maxP, curr_max);
        }
        return maxP;
    }
};
