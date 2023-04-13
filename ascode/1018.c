/* 
 * 1018: 자동판매기 시뮬레이션#1
 * http://ascode.org/problem.php?id=1018
 */
#include <stdio.h>
 
int main() {
    int money, five=0, one=0;
 
    scanf("%d", &money);
 
    while (money >= 500)
    {
        money -= 500;
        five++;
    }
    while (money >= 100)
    {
        money -= 100;
        one++;
    }
    printf("%d\n", five);
    printf("%d\n", one);
    printf("%d", money / 10);
 
    return 0;
}