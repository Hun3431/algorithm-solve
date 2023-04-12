/*
 * 1039: 마법의 수 찾아내기
 * http://ascode.org/problem.php?id=1039
 */
#include <stdio.h>
 
int main() {
    int a;
 
    scanf("%d", &a);
    if ((a % 7 == 0) && (a % 2 == 1))
        printf("1");
    else
        printf("0");
    return 0;
}