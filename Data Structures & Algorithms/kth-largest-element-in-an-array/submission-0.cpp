class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int target = nums.size() - k;
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right ){
            int randomIndex = left + rand() % (right - left + 1);
            swap (nums[randomIndex], nums[right]);
            int pivot = nums[right];
            int p = left;
            for (int i = left; i < right; i++){
                if (nums[i] <= pivot){
                    swap(nums[p], nums[i]);
                    p++;
                }

            }
            swap (nums[p], nums[right]);
            if (p == target) {
                return nums[p];
            }
            else if (p > target) {
                right = p - 1;
            }
            else {
                left = p + 1;
            } 
        }
        return -1;
    }
};
