/*
 * 1038: 삼각형 면적 구하기 #2
 * http://ascode.org/problem.php?id=1038
 */
#include <stdio.h>
 
int main() {
    double a, b, c;
     
    scanf("%lf %lf", &a, &b);
    c = a * b / 2;
    printf("%.10lf", c);
 
    return 0;
}