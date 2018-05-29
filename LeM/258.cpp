class Solution {
public:
    int addDigits(int num) {
        int tmp = num, sum = 0;
        if(tmp < 10) return tmp;
        while(tmp >= 10) {
            sum = 0;
            while(tmp > 0) {
                sum += tmp % 10;
                tmp /= 10;
            }
            tmp = sum;
        }
        return sum;
    }
};

// runtime 8ms
