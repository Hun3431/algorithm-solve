/*
 * 1371: 뱀게임에서 과일 위치 파악하기 - easy
 * http://ascode.org/problem.php?id=1371
 */
#include<stdio.h>
 
int main(void){
    int x, y, a, b;
    scanf("%d %d %d %d", &x, &y, &a, &b);
    if(a > x) {
        if(y > b) printf("FL\n");
        else if(y == b) printf("FS\n");
        else printf("FR\n");
    }
    else printf("PS");
     
    return 0;
}