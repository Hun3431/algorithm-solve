/*
 * 1358 : 
 * http://ascode.org/problem.php?id=1358
 */

#include<stdio.h>
 
int main() {
    int x1, x2, x3;
    int y1, y2, y3;
    scanf("x1: %d, x2: %d, x3: %d\n", &x1, &x2, &x3);
    scanf("y1: %d, y2: %d, y3: %d", &y1, &y2, &y3);
    printf("%d %d\n", x1 ^ x2 ^ x3, y1 ^ y2 ^ y3);
    return 0;
}
