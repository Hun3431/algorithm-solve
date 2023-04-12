/*
 * 1041: 짝수만 변환하기
 * http://ascode.org/problem.php?id=1041
 */
#include <stdio.h>
 
int main() {
    int a, b, c=1;
 
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d", a + 1);
    else
        printf("%d", a);
 
    return 0;
}