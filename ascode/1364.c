/*
 * 1364: 최대로 살 수 있는 사탕의 개수 계산하기 #2
 * http://ascode.org/problem.php?id=1364
 */
#include<stdio.h>

int main(void){
    int money, price;
    scanf("%d %d", &money, &price);
    
    if(money >= price) printf("%d %d", money / price, money % price);
    else printf("Can not buy.");

    return 0;
}
