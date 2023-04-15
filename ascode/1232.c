/*
 * 1232: 수소(emirp)
 * http://ascode.org/problem.php?id=1232
 */

#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int count = 0, min = __INT_MAX__, max = 0;
        int m, n;
        scanf("%d %d", &m,&n);
        if(m > n) {
            int t = m;
            m = n;
            n = t;
        }
        for(int i = m; i <= n; i ++) {
            int check = 1;
            // 소수 판별 시작
            if(i % 2 == 0) continue;    // 짝수 예외처리
            for(int j = 3; j * j <= i; j += 2) {
                if(i % j == 0){         // 나누어 떨어지는 수 소수x
                    check = 0;
                    break;
                }
            }
            // 숫자가 소수인 경우
            if(check) {
                int copy = i;
                int temp = 0;
                // 숫자 리버스
                for(; copy != 0;) {
                    temp *= 10;
                    temp += copy % 10;
                    copy /= 10;
                }
                // 리버스 소수 != 소수
                if(i != temp) {
                    // 리버스 숫자 판별 시작
                    if (temp % 2 == 0) continue;   // 짝수 예외 처리
                    for(int j = 3; j * j <= temp; j += 2) {
                        if(temp % j == 0){      // 나누어 떨어지는 수 소수x
                            check = 0;
                            break;
                        }
                    }
                    // 리버스 숫자가 소수인 경우
                    if(check) {
                        if(min > i) min = i;
                        max = i;
                        count ++;
                        //printf("%d %d\n", i, temp);
                    }
                }
            }
        }
        if(count != 0) printf("%d %d %d\n", max, min, count);
        else printf("0 0 0\n");
    }
    return 0;
}
