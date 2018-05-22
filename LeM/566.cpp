class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<int> tmp;
        vector<vector<int>> v(r, vector<int>(c));
        int row = nums.size(), col = nums[0].size();
        if(row * col < r * c) return nums;
        for(int i = 0; i < row; ++i) {
            for(int j = 0; j < col; ++j) {
                tmp.push_back(nums[i][j]);
            }
        }
        int idx = 0;
        for(int i = 0; i < r; ++i) {
            for(int j = 0; j < c; ++j) {
                v[i][j] = tmp[idx++];
            }
        }
        return v;
    }
};

// runtime 42ms
