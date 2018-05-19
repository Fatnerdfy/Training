class Solution {
public:
    int strStr(string haystack, string needle) {
        if(!needle.size()) return 0;
        string tmp(haystack);
        for(int i = 0; i < haystack.size(); ++i) {
            tmp.replace(i,needle.size(),needle);
            if(!tmp.compare(haystack)) return i;
            tmp = haystack;
        }
        return -1;
    }
};

// runtime 166ms
