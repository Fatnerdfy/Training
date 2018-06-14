class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.compare(B) == 0) return true;
        for(int i = 0; i < A.size(); ++i) {
            char c = A[0];
            A.erase(0,1);
            A.push_back(c);
            if(A.compare(B) == 0) return true;
            else continue;
        }
        return false;
    }
};

// runtime 4ms
