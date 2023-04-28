/*
 * 문제 G: 마법의 수 찾아내기 #3
 * http://ascode.org/problem.php?cid=1045&pid=6
 */
#include<stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    if(num % 2 == 1 && ( num % 3 == 0 || num % 7 == 0 || num % 17 == 0)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
