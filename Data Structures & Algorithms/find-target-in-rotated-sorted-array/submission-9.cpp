class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() -1;
        

        while (l <= r){
            int m = (l + r) / 2;
            if (nums[m] == target) return m;
            else if (nums[l] <= nums[m]){
                if (nums[m] > target && target >= nums[l]) r = m - 1;
                else l = m + 1;
            } else
                
                if (target > nums[m] && nums[r] >= target) l = m + 1;
                else r = m - 1;
        }
        return -1;
    }
};
