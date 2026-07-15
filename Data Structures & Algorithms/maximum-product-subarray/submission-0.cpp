class Solution {
public:
    int maxProduct(vector<int>& nums) {
       
       int maxP = nums[0];
       int n = nums.size();

       for (int i = 0; i < n; i++){
            int cur = 1;
            
            for (int j = i; j< n; j++){
                cur *= nums[j];
                maxP = max(maxP, cur);
            }
       } 
       return maxP;
    }
};