/*
 * 1245: 삼각형 면적 구하기 #4
 * http://ascode.org/problem.php?id=1245
 */

#include <stdio.h>
#include <math.h>
int main() {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int max = a, min = c, mid;
        if(b > max) max = b;
        if(c > max) max = c;
        if(b < min) min = b;
        if(b < min) min = c;
        if(max != a && min != a) mid = a;
        if(max != b && min != b) mid = b;
        if(max != c && min != c) mid = b;
        if(max >= min + mid)
            printf("No Triangle!\n");
        else {
            double p = (double)(a + b + c)/ 2;
            double result = p * (p - a) * (p - b) * (p - c);
            printf("%.10lf\n", sqrt(result));
        }
    }
    return 0;
}
