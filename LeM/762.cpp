class Solution {
public:
    bool isPrime(int n) {
        if(n == 1) return false;
        for(int i = 2; i * i <= n; ++i) {
            if(n % i == 0) return false;
        }
        return true;
    }

    int countPrimeSetBits(int L, int R) {
        int total = 0;
        for(int i = L; i <= R; ++i) {
            int tmp = i, cnt = 0;
            while(tmp) {
                cnt += tmp & 1;
                tmp >>= 1;
            }
            if(isPrime(cnt)) total++;
        }
        return total;
    }
};

// runtime 16ms
