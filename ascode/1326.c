/*
 * 1326: 수상한 계산기
 * http://ascode.org/problem.php?id=1326
 */
#include <stdio.h>
 
int main() {
    int testcase;
    scanf("%d", &testcase);
    while(testcase--) {
        int a, b;
        scanf("%d %d", &a, &b);
         
        int ca = 0, cb = 0;
        // 숫자 뒤집기
        while(a != 0){
            ca *= 10;
            ca += a % 10;
            a /= 10;
        }
        while(b != 0){
            cb *= 10;
            cb += b % 10;
            b /= 10;
        }
        a = ca + cb;
        while(a > 9){
            b = a;
            a = 0;
            while (b != 0) {
                a += b % 10;
                b /= 10;
            }
        }
        printf("%d\n", a);
    }
    return 0;
}