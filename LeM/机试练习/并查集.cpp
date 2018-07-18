#include<stack>
#include<queue>
#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

struct Node {
    int val;
    Node *lchild;
    Node *rchild;
};

int pre[1005];

// 无路径压缩版本
int find(int x) {
    if(pre[x] == -1) return x;
    else return find(pre[x]);
}

// 路径压缩
int findR(int x) {
    if(pre[x] == -1) return x;
    else {
        int root = find(pre[x]);
        pre[x] = root;
        return root;
    }
}

void join(int x, int y) {
    int rx = findR(x);
    int ry = findR(y);
    if(rx != ry) pre[ry] = rx;
}

int main(int argc, char const *argv[]) {
    #ifdef DEBUG
    printf("\nHello, World\n");
    #endif
    int n, m;
    while(scanf("%d%d", &n, &m)!=EOF) {
        if(n == 0) break;
        memset(pre, -1, sizeof(pre));
        for(int i = 0; i < m; ++i) {
            int x, y;
            scanf("%d%d", &x, &y);
            join(x, y);
        }
        int res = 0;
        for(int i = 1; i <= n; ++i) {
            if(pre[i] == -1) res++;
        }
        cout << res - 1 << endl;
    }
    return 0;
}
