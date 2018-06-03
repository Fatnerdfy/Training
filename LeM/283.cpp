class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        for(auto it = nums.begin(); it != nums.end(); ++it) {
            if(*it == 0) {
                cnt++;
                nums.erase(it);
                it = prev(it);
            }
        }
        for(int i = 0; i < cnt; ++i) nums.push_back(0);
    }
};

// runtime 18ms
