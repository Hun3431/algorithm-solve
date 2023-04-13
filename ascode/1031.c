/*
 * 1031: 위대한 차차 범위 측정기
 * http://ascode.org/problem.php?id=1031
 */
#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    while(testcase--) {
        unsigned int n;
        scanf("%d", &n);
        unsigned long long a = 2;
        int count = 1;
        while(a < n) {
            a *= 2;
            count ++;
        }
        printf("%d\n", count);
    }
    return 0;
}
