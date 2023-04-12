/* 
 * 1355: 최대로 살 수 있는 사탕의 개수 계산하기
 * http://ascode.org/problem.php?id=1355
 */
#include <stdio.h>
 
int main() {
    int money, price;
    scanf("%d %d", &money, &price);
     
    printf("%d\n%d", money/price, money%price);
     
    return 0;
}