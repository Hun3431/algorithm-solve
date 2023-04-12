/*
 * 1339: 최대값, 최소값 찾기 #2
 * http://ascode.org/problem.php?id=1339
 */
#include <stdio.h>
 
int main() {
    int testcase = 1;
    while (testcase) {
        int num, max = -100, min = 100;
         
        scanf("%d", &testcase);
        for (int i = 0; i < testcase; i ++) {
            scanf("%d", &num);
            if(num > max && num > -101 && num < 101) max = num;
            if(num < min && num > -101 && num < 101) min = num;
        }
        if(testcase != 0) printf("%d %d\n", max, min);
    }
     
     
    return 0;
}