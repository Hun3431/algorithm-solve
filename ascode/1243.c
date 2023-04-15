/*
 * 1243: 문자 3개 출력하기
 * http://ascode.org/problem.php?id=1243
 */

#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int a, b;
        scanf("%d %d", &a, &b);
        
        if((a >= 'a' && a <= 'z')||(a >= 'A' && a <= 'Z')){
            a += b;
            if((a >= 'a' && a <= 'z')||(a >= 'A' && a <= 'Z'))
                printf("%c%c%c\n", a, a, a);
            else
                printf("No Alphabet!\n");
        }
        else
            printf("No Alphabet!\n");
    }
    return 0;
}
