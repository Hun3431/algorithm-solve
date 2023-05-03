/*
 * 1230 : 최대 삼각형 찾기
 * http://ascode.org/problem.php?id=1230
 */

#include <stdio.h>
 
int bong[10000];
 
int main() {
    int testcase;
    scanf("%d", &testcase);
    while(testcase--){
        int num;
        scanf("%d", &num);
        for(int i = 0; i < num; scanf("%d", &bong[i++]));

        int len = 0;

        // 정렬
        for(int i = 0; i < num; i ++) {
            for(int j = 0; j < num - 1; j ++) {
                if(bong[j] < bong[j + 1]) {
                    int temp = bong[j];
                    bong[j] = bong[j + 1];
                    bong[j + 1] = temp;
                }
            }
        }

        for(int i = 0; i < num - 2; i ++) {
            if(-bong[i] + bong[i + 1] + bong[i + 2] < 0) continue;
            else {
                len = bong[i] + bong[i + 1] + bong[i + 2];
                break;
            }
        }
        printf("%d\n", len);
    }
}