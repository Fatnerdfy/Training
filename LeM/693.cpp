class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev = n % 2;
        n = n >> 1;
        while(n) {
            if(prev == n % 2) return false;
            prev = n % 2;
            n = n >> 1;
        }
        return true;
    }
};

// runtime 9ms
