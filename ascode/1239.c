/*
 * 1239: 곱셈
 * http://ascode.org/problem.php?id=1239
 */
#include <stdio.h>
 
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("%d\n", a * (b%10));
    printf("%d\n", a * (b/10));
    printf("%d\n", a*b);
    return 0;
}