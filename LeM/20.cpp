class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        string left = "([{";
        string right = ")]}";
        for(auto c : s) {
            if(left.find(c) != string::npos) {
                stk.push(c);
            } else {
                if(stk.empty() || stk.top() != left[right.find(c)]) return false;
                else stk.pop();
            }
        }
        return stk.empty();
    }
};

// runtime 4ms
