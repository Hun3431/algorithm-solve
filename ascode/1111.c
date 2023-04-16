/*
 * 1111: 계산기 만들기
 * http://ascode.org/problem.php?id=1111
 */

#include <stdio.h>

int main() {
    long int a, b;
    char x, y;
    scanf("%ld %ld %c%c", &a, &b, &x, &y);
    switch (x) {
        case '+':
            printf("%ld", a + b);
            break;
        case '-':
            printf("%ld", a - b);
            break;
        case '*':
            printf("%ld", a*b);
            break;
        case '/':
            if (b == 0) printf("Mission Impossible");
            else {
                if (y  == '/') printf("%ld", a/b);
                else {
                    printf("%.3lf", (double)a/b);
                }
            }
            break;
        case '%':
            printf("%ld", a%b);
            break;
        default:
            printf("Mission Impossible");
    }
    return 0;
}
