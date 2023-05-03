/*
 * 1361 : 계산기 만들기 - Easy
 * http://ascode.org/problem.php?id=1361
 */
#include <stdio.h>

int main() {
    int x, y;
    char c;
    scanf("%d %c %d", &x, &c, &y);

    switch (c)
    {
    case '+':
        printf("%d", x + y);
        break;
    case '-':
        printf("%d", x - y);
        break;
    case 'x':
        printf("%d", x * y);
        break;
    case '/':
        if(y == 0) printf("Mission Impossible");
        else printf("%.5lf", (double)x / y);
        break;
    case '%':
        if(y == 0) printf("Mission Impossible");
        else printf("%d", x % y);
        break;
    default:
        printf("Mission Impossible");
        break;
    }
} 