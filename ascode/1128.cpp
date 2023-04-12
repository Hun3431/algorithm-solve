/*
 * 문제 C: 追羊
 * http://ascode.org/problem.php?cid=1009&pid=2
 */
#include <iostream>
#include <string.h>
using namespace std;
 
struct point {
    int x;
    int y;
};
int move(char *test, struct point *p) {
    for (int i = 0; i < strlen(test); i++) {
        if (test[i] == 'L') {
            p->x--;
        }
        else if (test[i] == 'R') {
            p->x++;
        }
        else if (test[i] == 'U') {
            p->y++;
        }
        else {  //D
            p->y--;
        }
        if (p->x > 30 || p->x < -30)
            return 0;
        if (p->y > 60 || p->y < -60)
            return 0;
    }
    return 1;
}
 
int main() {
    int testcase; cin >> testcase;
    while (testcase--) {
        struct point p;
        cin >> p.x >> p.y;
        char test[101];
        cin >> test;
        int x;
        x = move(test, &p);
        if (x == 0) printf("invalid\n");
        else printf("%d %d\n", p.x, p.y);
    }
}