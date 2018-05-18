class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x ^ y;
        int result = 0;
        while(a) {
            if(a % 2 != 0)
                result++;
            a /= 2;
        }
        return result;
    }
};
