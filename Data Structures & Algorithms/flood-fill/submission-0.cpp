class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor = image[sr][sc];
        if (oldcolor == color) return image;
        dfs(image, sr, sc, oldcolor, color);
        return image;
    }
private: 
    void dfs(vector<vector<int>>& image, int r, int c, int oldcolor, int color){
        if (r >= image.size() || r < 0 || c >= image[0].size() || c < 0 || image[r][c] != oldcolor) return;
        image[r][c] = color;
        dfs(image, r + 1, c, oldcolor, color);
        dfs(image, r - 1, c, oldcolor, color);
        dfs(image, r, c + 1, oldcolor, color);
        dfs(image, r, c - 1, oldcolor, color);
    }
};