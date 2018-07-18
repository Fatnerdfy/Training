#include<stack>
#include<queue>
#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;


int main(int argc, char const *argv[]) {
    #ifdef DEBUG
    printf("\nHello, World\n");
    #endif
    priority_queue<int, vector<int>, greater<int>> Q;
    int n;
    while(scanf("%d", &n)!=EOF) {
        while(Q.empty() == false) Q.pop();
        for(int i = 0; i < n; ++i) {
            int x;
            scanf("%d", &x);
            Q.push(x);
        }
        int ans = 0;
        while(Q.size() > 1) {
            int a = Q.top();
            Q.pop();
            int b = Q.top();
            Q.pop();
            ans += a + b;
            Q.push(a+b);
        }
        cout << ans << endl;
    }
    return 0;
}
