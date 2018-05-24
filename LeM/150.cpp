class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        string sign = "+-*/";
        for(auto c : tokens) {
            if(sign.find(c) != string::npos) {
                int y = stk.top();
                stk.pop();
                int x = stk.top();
                stk.pop();
                if(c == "+") stk.push(x + y);
                else if(c == "-") stk.push(x - y);
                else if(c == "*") stk.push(x * y);
                else if(c == "/") stk.push(x / y);
            } else {
                stk.push(stoi(c));
            }
        }
        return stk.top();
    }
};

// runtime 10ms
