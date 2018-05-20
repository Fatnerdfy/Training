class Solution {
public:
    string reverseString(string s) {
        string t;
        for(auto it = prev(s.end()); it >= s.begin(); --it)
            t += *it;
        return t;
    }
};

// runtime 16ms
