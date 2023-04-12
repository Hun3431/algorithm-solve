/*
 * 1151: 온도 변환 #2
 * http://ascode.org/problem.php?id=1151
 */
#include <stdio.h>
 
int main() {
    double F;
    scanf("%lf", &F);
     
    double C = ((double)5 / 9) * (F - 32);
    printf("%.2lf", C);
    return 0;
}