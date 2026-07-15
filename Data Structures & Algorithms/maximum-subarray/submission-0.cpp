class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_sum = nums[0];
        for (int i = 0; i < n; i++){
            int cur = 0;
            for (int j = i; j < n; j++){
                cur += nums[j];
                max_sum = max(cur, max_sum);
            }
        }
        return max_sum;
    }
};
