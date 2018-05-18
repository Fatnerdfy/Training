class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        stack<int> s;
        for(int i = 0; i < A.size(); ++i) {
            for(int j = 0; j < A.size(); ++j) {
                s.push(A[i][j]);
            }
            for(int j = 0; j < A.size(); ++j) {
                A[i][j] = (s.top() + 1) % 2;
                s.pop();
            }
        }
        return A;
    }
};

// runtime 15ms
