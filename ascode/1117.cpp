/*
 * 문제 F: 빙고게임 판단하기
 * http://ascode.org/problem.php?cid=1007&pid=5
 */
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int test, s;
    int num[3][3], cheak[3][3] = { 0 };
    int x, y, count = 0, cycle, sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &num[i][j]);
        }
    }
    scanf("%d", &count);
    while (count--) {
        scanf("%d", &s);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (s == num[i][j])
                    cheak[i][j] = 1;
            }
        }
    }
    int bing = 0;
    if (cheak[0][0] == 1) {
        if (cheak[1][0] == 1) {
            if (cheak[2][0] == 1)
                bing++;
        }
        if (cheak[0][1] == 1) {
            if (cheak[0][2] == 1) {
                bing++;
            }
        }
        if (cheak[1][1] == 1) {
            if (cheak[2][2] == 1) {
                bing++;
            }
        }
    }
    if (cheak[1][0] == 1) {
        if (cheak[1][1] == 1) {
            if (cheak[1][2] == 1) {
                bing++;
            }
        }
    }
    if (cheak[2][0] == 1) {
        if (cheak[2][1] == 1) {
            if (cheak[2][2] == 1) {
                bing++;
            }
        }
        if (cheak[1][1] == 1) {
            if (cheak[0][2] == 1) {
                bing++;
            }
        }
    }
    if (cheak[0][1] == 1) {
        if (cheak[1][1] == 1) {
            if (cheak[2][1] == 1) {
                bing++;
            }
        }
    }
    if (cheak[0][2] == 1) {
        if (cheak[1][2] == 1) {
            if (cheak[2][2] == 1) {
                bing++;
            }
        }
    }
    printf("%d", bing);
    return 0;
}