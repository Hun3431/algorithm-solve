/*
 * 1087: Kram 17인치 구매 대작전
 * http://ascode.org/problem.php?id=1087
 * 반복문 사용
 */
#include<stdio.h>

int main(void){
    int test;
    scanf("%d", &test);
    while (test --){
        int price, day = 0;
        scanf("%d", &price);
        while(price > 0) {
            if(day % 7 < 4) {
                price -= 4 * 9000;
            }
            else {
                price -= 6 * 10000;
            }
            day ++;
        }
        printf("%d\n", day);
    }
    return 0;
}