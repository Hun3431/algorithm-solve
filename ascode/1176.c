/*
 * 1176: 로또 추첨 번호 판정하기 - Basic
 * http://ascode.org/problem.php?id=1176
 */
#include<stdio.h>

int main(void){
    // 입력 받을 번호와 조건 만족도 상태를 나타내는 변수 선언
    int num[6], state = 0, sum = 0, odd = 0;
    // 번호 입력, 번호의 총합 계산, 홀수 번호 계산
    for(int i = 0; i < 6; i ++) {
        scanf("%d", &num[i]);
        sum += num[i];
        odd += num[i] % 2;
    }
    
    // 조건 1번을 만족하면 조건의 상태를 나타내는 변수 state에 1 증감
    if(sum > 90 && sum < 181) state ++;
    // 조건 2번을 만족하면 조건의 상태를 나타내는 변수 state에 1 증감
    if((odd < 5 && odd > 1)) state ++;
    
    // 두 개의 조건을 모두 만족하는 경우 state == 2
    if(state == 2) printf("BEST\n");
    // 한 개의 조건을 만족하는 경우 state == 1
    else if(state == 1) printf("GOOD\n");
    // 두 개의 조건 모두를 만족하지 않는 경우 state == 0
    else printf("BAD\n");
    
    return 0;
}
