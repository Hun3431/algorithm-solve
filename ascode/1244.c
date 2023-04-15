/*
 * 1244: 시험점수 판정하기 #2
 * http://ascode.org/problem.php?id=1244
 */

#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int score;
        scanf("%d", &score);
        int num = 19 - score / 5;
        if(num == -1) num = 0;
        if(num < 8) {
            printf("%c%c\n", 'A' + num / 2, (num % 2 == 0)? '+':'0');
        }
        else {
            printf("F\n");
        }
    }
    return 0;
}
