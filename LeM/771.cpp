class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int result = 0;
        for(int i = 0; i < S.size(); ++i)
            if(J.find(S[i]) != string::npos) result++;
        return result;
    }
};
