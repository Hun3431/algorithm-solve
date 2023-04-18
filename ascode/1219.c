/*
 * 1219: 홀수, 짝수 갯수 세기
 * http://ascode.org/problem.php?id=1219
 */
#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int num;
        scanf("%d", &num);
        int odd = 0, even = 0;
        while (num--) {
            int n;
            scanf("%d", &n);
            if(n == 0) continue;
            else if(n % 2) odd ++;
            else even ++;
        }
        printf("ODD:%d EVEN:%d\n", odd, even);
    }
    return 0;
}
