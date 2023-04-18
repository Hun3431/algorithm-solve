/*
 * 1220: 삼각형 그리기 #1
 * http://ascode.org/problem.php?id=1220
 */
#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int num;
        scanf("%d", &num);
        for(int i = 1; i <= num; i ++) {
            for(int j = i; j < num; j ++) printf(" ");
            for(int j = num - i; j < num; j ++) printf("*");
            printf("\n");
        }
        for(int i = 1; i < num; i ++) {
            for(int j = num - i; j < num; j ++) printf(" ");
            for(int j = i; j < num; j ++) printf("*");
            printf("\n");
        }
    }
    return 0;
}
