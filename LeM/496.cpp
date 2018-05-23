class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> v;
        for(int i = 0; i < findNums.size(); ++i) {
            bool flag = false;
            bool find = false;
            for(int j = 0; j < nums.size(); ++j) {
                if(findNums[i] == nums[j]) find = true;
                if(findNums[i] < nums[j] && find) {
                    flag = true;
                    v.push_back(nums[j]);
                    break;
                }
            }
            if(!flag) v.push_back(-1);
        }
        return v;
    }
};

// runtime 19ms
