class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        vector<string> s = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        for(auto it = words.begin(); it != words.end(); ++it) {
            string t = *it;
            transform(t.begin(),t.end(),t.begin(),::tolower);
            int first, second;
            bool flag = true;
            for(int i = 0; i < t.size(); ++i) {
                for(int j = 0; j < s.size(); ++j) {
                    if(s[j].find(t[i]) != string::npos) {
                        if(i == 0) first = j;
                        else second = j;
                    }
                }
                if(i != 0 && first != second) {
                    flag = false;
                    break;
                }
            }
            if(flag) result.push_back(*it);
        }
        return result;
    }
};

// runtime 2ms
