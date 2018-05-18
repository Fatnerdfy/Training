class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int result = 0;
        vector<string> v;
        for(int i = 0; i < words.size(); ++i) {
            string s;
            for(int j = 0; j < words[i].size(); ++j) {
                s += morse[words[i][j] - 97];
            }
            if(find(v.begin(), v.end(), s)==v.end()) {
                v.push_back(s);
                result++;
            }
        }
        return result;
    }
};

// runtime 7ms
