class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> v;
        int tmp = S.find(C);
        for(int i = 0; i < S.size(); ++i) {
            if(i <= tmp) v.push_back(tmp - i);
            else v.push_back(i - tmp);
        }
        S[tmp] = S[tmp] + 1;
        while((tmp = S.find(C)) != string::npos) {
            for(int i = 0; i < S.size(); ++i) {
                if(i <= tmp) v[i] = min(tmp - i, v[i]);
                else v[i] = min(i - tmp, v[i]);
            }
            S[tmp] = S[tmp] + 1;
        }
        return v;
    }
};

// runtime 15ms
