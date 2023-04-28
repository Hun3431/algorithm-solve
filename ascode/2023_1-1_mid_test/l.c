/*
 * 문제 L: 로또 추첨 번호 판정하기 - Basic
 * http://ascode.org/problem.php?cid=1045&pid=11
 */
#include<stdio.h>
int main(void){
    // 입력 받을 번호와 조건 만족도 상태를 나타내는 변수 선언
    int n1, n2, n3, n4, n5, n6, state = 0;
    // 번호 입력
    scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);

    // 로또 번호 총합 계산
    int sum = n1 + n2 + n3 + n4 + n5 + n6;
    // 조건 1번을 만족하면 조건의 상태를 나타내는 변수 state에 1 증감
    if(sum > 90 && sum < 181) state ++;
    
    // 홀수의 갯수 파악
    int odd = 0; // odd : 홀수
    if(n1 % 2) odd ++;
    if(n2 % 2) odd ++;
    if(n3 % 2) odd ++;
    if(n4 % 2) odd ++;
    if(n5 % 2) odd ++;
    if(n6 % 2) odd ++;
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
