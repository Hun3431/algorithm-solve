/*
 * 문제 E: 나머지 구하기 #2
 * http://ascode.org/problem.php?cid=1045&pid=4
 */
#include<stdio.h>

int main(void){
    unsigned int n1, n2, n3, n4;
    scanf("%u %u %u %u", &n1, &n2, &n3, &n4);
    
    printf("%u\n", (n1 * n2) % (n3 + n4));
    return 0;
}
