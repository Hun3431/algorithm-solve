/*
 * 1372: 마법의 수 찾아내기 #3
 * http://ascode.org/problem.php?id=1372
 */
#include<stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    if(num % 2 == 1 && ( num % 3 == 0 || (num % 7 == 0 && num % 17 == 0))) printf("YES\n");
    else printf("NO\n");
    return 0;
}
