#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int n;
int num[100];
int search(int x) {
    int first = 0, last = n - 1;
    while(first <= last) {
        int mid = (first + last) / 2;
        if(x == num[mid]) return mid;
        else if(x < num[mid])
            last = mid - 1;
        else first = mid + 1;
    }
    return -1;
}
int main(int argc, char const *argv[]) {
    #ifdef DEBUG
    printf("\nHello, World\n");
    #endif
    int x;
    scanf("%d %d", &n, &x);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    cout << search(x) << endl;
    return 0;
}
