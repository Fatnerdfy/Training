class Solution {
public:
    int calPoints(vector<string>& ops) {
        int result = 0;
        stack<int> s;
        for(int i = 0; i < ops.size(); ++i) {
            if(ops[i] == "C") {
                s.pop();
            } else if(ops[i] == "D") {
                s.push(s.top() * 2);
            } else if(ops[i] == "+") {
                int first = s.top();
                s.pop();
                int second = s.top();
                s.push(first);
                s.push(first + second);
            } else {
                s.push(stoi(ops[i]));
            }
        }
        while(!s.empty()) {
            result += s.top();
            s.pop();
        }
        return result;
    }
};

// runtime 6ms
