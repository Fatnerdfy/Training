class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int cnt = 0, prev = -100001;
        sort(candies.begin(), candies.end());
        for(int i = 0; i < candies.size(); ++i) {
            if(candies[i] != prev) {
                cnt++;
                prev = candies[i];
            }
        }
        return cnt < candies.size() / 2 ? cnt : candies.size() / 2;
    }
};

// runtime 254ms
