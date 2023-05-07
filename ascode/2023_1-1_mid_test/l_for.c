/*
 * 문제 L: 로또 추첨 번호 판정하기 - Basic
 * http://ascode.org/problem.php?cid=1045&pid=11
 * 반복문, 배열 사용
 */
#include<stdio.h>

int main(void){
    int num, i, state = 0, sum = 0, odd = 0;
    for(i = 0; i < 6; i ++) {
        scanf("%d", &num);
        sum += num;
        odd += num % 2;
    }
    if(sum > 90 && sum < 181) state ++;
    if((odd < 5 && odd > 1)) state ++;
    
    if(state == 2) printf("BEST\n");
    else if(state == 1) printf("GOOD\n");
    else printf("BAD\n");
    
    return 0;
}
