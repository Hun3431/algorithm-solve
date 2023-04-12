/* 
 * 1356: 2차 함수 계산
 * http://ascode.org/problem.php?id=1356
 */


#include <stdio.h>
 
int main() {
    int a, b, c;
    double x;
     
    scanf("%d %d %d", &a, &b, &c);
    scanf("%lf", &x);
     
    printf("y=%d*x*x+%d*x+%d\n", a, b, c);
    printf("%.9lf", a * x * x + b * x + c);
     
    return 0;
}