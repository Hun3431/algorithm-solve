/*
 * 1121: 제곱수의 합
 * http://ascode.org/problem.php?id=1121
 */
// 큰 수에서부터 내려가는 방법이 아니여도 작은 제곱수의 조합법을 찾아야함
// ex 1000 -> 1^2 1^2 1^2 6^2 31^2 가 큰수에서 내려간것
//         -> 30^2 10^2
#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int arr [32] = { 0 };
        int num;
        scanf("%d", &num);
        int i;
        for(i = 1; i <= num; i ++);
        for(int j = i; num != 0; j --){
            while(j * j <= num) {
                num -= j * j;
                arr[j] ++;
                //printf("%d : %d\n", j, arr[j]);
            }
        }
        for(int i = 1; i < 32; i ++) {
            if (arr[i]) {
                while (arr[i] --) {
                    printf("%d^2 ", i);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
