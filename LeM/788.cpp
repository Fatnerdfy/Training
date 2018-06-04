class Solution {
public:
    int rotatedDigits(int N) {
        int result = 0;
        string inv = "347";
        string diff = "2569";
        for(int i = 2; i <= N; ++i) {
            bool flag = false;
            string s = to_string(i);
            for(int j = 0; j < s.size(); ++j) {
                if(inv.find(s[j]) != string::npos) {
                    flag = false;
                    break;
                } else if(diff.find(s[j]) != string::npos) flag = true;
            }
            if(flag) result++;
        }
        return result;
    }
};

// runtime 21ms
