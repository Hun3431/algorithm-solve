/*
 * 1233: 수소 구하기 I
 * http://ascode.org/problem.php?id=1233
 */

#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int num, prime = 1;
        scanf("%d", &num);
        if(num != 2) {
            if(num % 2 == 0) {
                prime = 0;
            }
            else
                for(int i = 3; i * i <= num; i += 2) {
                    if(num % i == 0) {
                        prime = 0;
                        break;
                    }
                }
        }
        if(prime) printf("Prime\n");
        else printf("Not Prime\n");
    }
    return 0;
}
