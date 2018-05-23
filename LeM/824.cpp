class Solution {
public:
    string toGoatLatin(string S) {
        string result;
        string vowel = "aeiouAEIOU";
        int idx = S.find(' ');
        int cnt = 1;
        while(idx != string::npos) {
            if(vowel.find(S[0]) == string::npos) {
                result = result + S.substr(1, idx - 1) + S[0] + "ma";
            } else {
                result = result + S.substr(0, idx) + "ma";
            }
            for(int i = 0; i < cnt; ++i) result += "a";
            result += " ";
            cnt++;
            S = S.substr(idx + 1);
            idx = S.find(' ');
        }
        if(vowel.find(S[0]) == string::npos) {
            result = result + S.substr(1, idx - 1) + S[0] + "ma";
        } else {
            result = result + S.substr(0, idx) + "ma";
        }
        for(int i = 0; i < cnt; ++i) result += "a";
        return result;
    }
};


// runtime 6ms
// 感觉这个代码写的好蠢。。。
