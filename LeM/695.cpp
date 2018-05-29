class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j) {
        int row = grid.size();
        int col = grid[0].size();
        if(i >=0 && i < row && j >=0 && j < col && grid[i][j] == 1) {
            grid[i][j] = 0;
            return 1 + dfs(grid, i + 1, j) + dfs(grid, i - 1, j) + dfs(grid, i, j + 1) + dfs(grid, i, j - 1);
        }
        return 0;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        int row = grid.size();
        int col = grid[0].size();
        for(int i = 0; i < row; ++i) {
            for(int j = 0; j < col; ++j) {
                if(grid[i][j] == 1) {
                    maxArea = max(maxArea, dfs(grid, i, j));
                }
            }
        }
        return maxArea;
    }
};

// runtime 32ms
