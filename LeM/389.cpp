class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i = 0; i < s.size(); ++i) {
            if(s.find(t[i]) == string::npos) return t[i];
            else {
                s.erase(s.find(t[i]),1);
                t.erase(i,1);
                i -= 1;
            }
        }
        return t[0];
    }
};

// runtime 11ms
