/*
 * 1365: 관객수 통계 구하기
 * http://ascode.org/problem.php?id=1365
 */
#include<stdio.h>

int main(void){
    int w1, w2, w3, w4, w5, w6, w7;
    scanf("%d %d %d %d %d %d %d", &w1, &w2, &w3, &w4, &w5, &w6, &w7);
    int sum = w1 + w2 + w3 + w4 + w5 + w6 + w7;
    
    printf("%d %.9lf\n", sum, (double)sum / 7);
    return 0;
}
