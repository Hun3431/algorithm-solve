/*
 * 1369: 이차방적식과 근의 판별 #3
 * http://ascode.org/problem.php?id=1369
 */
#include<stdio.h>

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    double d = b * b - 4 * a * c;
    if(d > 0) printf("Real\n");
    else if(d == 0) {
        printf("%.2lf", -1 * (double)b / (2 * a));
    }
    else printf("Imaginary\n");
    
    return 0;
}
