class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int size = nums.size();
        for(int i = 0; i < size; ++i) {
            int index = abs(nums[i]) - 1;
            nums[index] = nums[index] < 0 ? nums[index] : -nums[index];
        }
        for(int i = 0; i < size; ++i) {
            if(nums[i] > 0) result.push_back(i+1);
        }
        return result;
    }
};

// runtime 128ms
