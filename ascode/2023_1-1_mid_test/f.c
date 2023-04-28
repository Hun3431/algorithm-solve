/*
 * 문제 F: 최대로 살 수 있는 사탕의 개수 계산하기 #2
 * http://ascode.org/problem.php?cid=1045&pid=5
 */
#include<stdio.h>

int main(void){
    int money, price;
    scanf("%d %d", &money, &price);
    
    printf("%d %d", money / price, money % price);
    return 0;
}
