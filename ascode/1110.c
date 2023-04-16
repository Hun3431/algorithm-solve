/*
 * 1110: 근의 공식 #2
 * http://ascode.org/problem.php?id=1110
 */

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int result = b * b - 4 * a * c;
    if(result == 0) printf("0");
    else if(result > 0) printf("1");
    else printf("-1");
    return 0;
}
