/* 
 * 1010: 삼각형 면적 구하기 (기초) #3
 * http://ascode.org/problem.php?id=1010
 */
#include<stdio.h>
 
int main(void){
    int x, y, z;
     
    scanf("%d %d", &x, &y);
    z=x*y/2;
    printf("%d, %d, %d", x, y, z);
     
    return 0;
}
