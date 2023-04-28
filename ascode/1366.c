/*
 * 1366: 나머지 구하기 #2
 * http://ascode.org/problem.php?id=1366
 */
#include<stdio.h>

int main(void){
    unsigned int n1, n2, n3, n4;
    scanf("%u %u %u %u", &n1, &n2, &n3, &n4);
    
    printf("%u\n", (n1 * n2) % (n3 + n4));
    return 0;
}
