/*
 * 1241: 자연수 계산하기
 * http://ascode.org/problem.php?id=1241
 */

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a += b;
    c += d;
    printf("%d\n",a / c);
    printf("%d\n",a % c);
    printf("%.5f\n",(double)a / c);
    return 0;
}
