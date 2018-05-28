class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxA = 0;
        for(auto &i : points) {
           for(auto &j : points) {
               for(auto &k : points) {
                   maxA = max(maxA, 0.5 * abs(i[0] * (j[1] - k[1]) + j[0] * (k[1] - i[1]) + k[0] * (i[1] - j[1])));
               }
           }
        }
        return maxA;
    }
};

// runtime 20ms
