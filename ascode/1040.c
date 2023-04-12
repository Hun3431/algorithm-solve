/*
 * 문제 F: 2의n승 배 계산하기
 * http://ascode.org/problem.php?cid=1003&pid=5
 */
#include <stdio.h>
 
int main() {
    int a, b, c=1;
 
    scanf("%d %d", &a,  &b);
    for (int i = 0; i < b; i++)
        c *= 2;
    printf("%d", a * c);
 
    return 0;
}