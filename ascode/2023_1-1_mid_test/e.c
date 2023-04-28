/*
 * 문제 E: 나머지 구하기 #2
 * http://ascode.org/problem.php?cid=1045&pid=4
 */
#include<stdio.h>

int main(void){
    int n1, n2, n3, n4;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    printf("%d\n", (n1 * n2) % (n3 + n4));
    return 0;
}
