class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if(!grid.size()) return 0;
        int cnt = 0;
        int result = 0;
        int row = grid.size(), col = grid[0].size();
        int dx[4] = {0,0,-1,1};
        int dy[4] = {-1,1,0,0};
        for(int i = 0; i < row; ++i) {
            for(int j = 0; j < col; ++j) {
                if(grid[i][j] == 1) {
                    result++;
                    for(int k = 0; k < 4; ++k) {
                        int x = i + dx[k];
                        int y = j + dy[k];
                        if(x >= 0 && x < row && y >= 0 && y < col) {
                            if(grid[x][y] == 1)
                                cnt++;
                        }
                    }
                }
            }
        }
        return result * 4 - cnt;
    }
};

// runtime 227ms
