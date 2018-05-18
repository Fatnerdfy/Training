class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        bool flag = false;
        for(int i = left; i <= right; ++i) {
            int tmp = i;
            while(tmp) {
                if(tmp % 10 == 0) {
                    flag = true;
                    break;
                } else if(i % (tmp%10) != 0) {
                    flag = true;
                    break;
                }
                tmp /= 10;
            }
            if(!flag) v.push_back(i);
            else flag = !flag;
        }
        return v;
    }
};

// runtime 4ms
