#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int maxDay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

struct Date {
    int year;
    int month;
    int day;

    bool isLeap(int x) {
        return (x % 100 != 0 && x % 4 == 0) || x % 400 == 0;
    }

    bool equal(Date b) {
        if(year == b.year && month == b.month && day == b.day)
            return true;
        else return false;
    }

    void add() {
        int max;
        if(isLeap(year) && month == 2) max = 29;
        else max = maxDay[month];
        day++;
        if(day > max) {
            month++;
            day = 1;
        }
        if(month > 12) {
            year++;
            month = 1;
        }
    }
};

int minD(Date a, Date b) {
    if(a.year < b.year) return true;
    else if(a.year > b.year) return false;
    else if(a.month < b.month) return true;
    else if(a.month > b.month) return false;
    else if(a.day < b.day) return true;
    else if(a.day > b.day) return false;
    else return false;
}

int main(int argc, char const *argv[]) {
    #ifdef DEBUG
    printf("\nHello, World\n");
    #endif
    Date a, b;
    while(scanf("%4d%2d%2d", &a.year, &a.month, &a.day)!=EOF) {
        scanf("%4d%2d%2d", &b.year, &b.month, &b.day);
        int cnt = 0;
        Date t1, t2;
        if(minD(a, b)) {
            t1 = a;
            t2 = b;
        } else {
             t1 = b;
             t2 = a;
        }
        while(!t1.equal(t2)) {
            t1.add();
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
