class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int lines = 1, left = 100;
        for(int i = 0; i < S.size(); ++i) {
            if(widths[S[i] - 'a'] <= left) left -= widths[S[i] - 'a'];
            else {
                lines++;
                left = 100 - widths[S[i] - 'a'];
            }
        }
        return vector<int>({lines, 100 - left});
    }
};

// runtime 3ms
