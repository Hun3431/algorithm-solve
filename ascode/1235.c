/*
 * 1235: 수소 구하기 III
 * http://ascode.org/problem.php?id=1235
 */

#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int start, end;
        int count = 0;
        scanf("%d %d", &start, &end);
        
        for(int i = start; i <= end; i ++) {
            if (i < 2) continue;
            if (i == 2) {
                count ++;
                continue;
            }
            if (i % 2 == 0) continue;
            int prime = 1;
            for(int j = 3; j * j <= i; j += 2) {
                if(i % j == 0) {
                    prime = 0;
                    break;
                }
            }
            if(prime) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
