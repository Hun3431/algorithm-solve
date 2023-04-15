/*
 * 1294: 나머지
 * http://ascode.org/problem.php?id=1294
 */

#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int cycle, num[10] = { 0 };
        scanf("%d", &cycle);

        for(int i = 0; i < cycle; i ++) {
            int a;
            scanf("%d", &a);
            num[a % 10] ++;
        }
        for(int i = 0; i < 10; i ++) {
            printf("%d : %d\n", i, num[i]);
        }
        printf("\n");
    }
    return 0;
}
