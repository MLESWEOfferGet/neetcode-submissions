class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;
        int h= heights.size();
        for (int i = 0; i < h; i++){
            for (int j = i + 1; j < h; j++){
                int water = min (heights[i], heights[j]) * (j - i);
                res = max (res, water);
            }
        }
        return res;
    }
};
