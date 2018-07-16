#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int n;
struct stu {
    char name[10];
    int age;
    int score;
}buf[10];

bool cmp(int x, int y) {
    return x > y;
}

bool compare(stu a, stu b) {
    if(a.score != b.score) return a.score < b.score;
    int tmp = strcmp(a.name, b.name);
    if(tmp != 0) return tmp < 0;
    return a.age < b.age;
}

int main(int argc, char const *argv[]) {
    #ifdef DEBUG
    printf("\nHello, World\n");
    #endif
    while(scanf("%d", &n)!=EOF) {
        for(int i = 0; i < n; ++i)
            scanf("%s%d%d", &buf[i].name, &buf[i].age, &buf[i].score);
        sort(buf, buf+n, compare);
        for(int i = 0; i < n; ++i)
            printf("%s %d %d\n", buf[i].name, buf[i].age, buf[i].score);
    }
    printf("\nHello, World\n");

    return 0;
}
