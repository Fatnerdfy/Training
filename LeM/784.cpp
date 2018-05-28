class Solution {
public:
    void changeStr(string& s, vector<string>& res, int i) {
        if(i == s.size()) {
            res.push_back(s);
            return ;
        }
        if(s[i] >= '0' && s[i] <= '9') changeStr(s, res, i+1);
        else if(s[i] >= 'a' && s[i] <= 'z') {
            changeStr(s, res, i+1);
            s[i] -= 32;
            changeStr(s, res, i+1);
        } else if(s[i] >= 'A' && s[i] <= 'Z') {
            changeStr(s, res, i+1);
            s[i] += 32;
            changeStr(s, res, i+1);
        }
    }

    vector<string> letterCasePermutation(string S) {
        vector<string> res;
        changeStr(S, res, 0);
        return res;
    }

};

// runtime 7ms
