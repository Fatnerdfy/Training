class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size() < 2) return true;
        else if(word[0] >= 'A' && word[0] <= 'Z') {
            if(word[1] >= 'A' && word[1] <= 'Z') {
                for(int i = 0; i < word.size(); ++i) {
                    if(word[i] >= 'a' && word[i] <= 'z') return false;
                }
                return true;
            } else {
                for(int i = 1; i < word.size(); ++i) {
                    if(word[i] >= 'A' && word[i] <= 'Z') return false;
                }
                return true;
            }
        } else {
            for(int i = 1; i < word.size(); ++i) {
                if(word[i] >= 'A' && word[i] <= 'Z') return false;
            }
            return true;
        }
    }
};

// runtime 15ms
