/*
 * 1069: 간단한 팩토리얼 계산 (반복문으로 풀어보자)
 * http://ascode.org/problem.php?id=1069
 */
#include <stdio.h>

int main(void) {
    unsigned long int test;
    int line;
    scanf("%ld", &test);
    for(int i=0;i<test;i++){
        unsigned long long int star=1;   
        scanf("%d", &line);
        for(int j=1;j<=line;j++)
            star*=j;
        printf("%lld\n", star);
    }
    return 0;
}