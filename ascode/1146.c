/*
 * 1146: 원의 면적 구하기
 * http://ascode.org/problem.php?id=1146
 */
#include<stdio.h>
#define phi 3.14159265358979
int main(void){
    int d;
    scanf("%d", &d);
    
    double r = (double)d / 2;
    printf("%.5lf\n", r * r * phi);
    return 0;
}
