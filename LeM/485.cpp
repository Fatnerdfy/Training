class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        bool flag = false;
        int max_len = 0, cnt = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(flag) {
                if(nums[i] == 1) {
                    cnt++;
                    max_len = max(max_len, cnt);
                } else {
                    flag = false;
                    cnt = 0;
                }
            } else {
                if(nums[i] == 1) {
                    flag = true;
                    cnt++;
                    max_len = max(max_len, cnt);
                }
            }
        }
        return max_len;
    }
};

// runtime 39ms
