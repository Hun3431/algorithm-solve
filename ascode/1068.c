/*
 * 1068: 간단한 팩토리얼 계산 (재귀호출로 풀어보자)
 * http://ascode.org/problem.php?id=1068
 */
#include<stdio.h>
 
int main(void) {
    int test;
    int line;
    scanf("%d", &test);
    for(int i=0;i<test;i++){
        unsigned long long int star=1;   
        scanf("%d", &line);
        for(int j=1;j<=line;j++)
            star*=j;
        printf("%lld\n", star);
    }
    return 0;
}