/*
 * 문제 E: 오목알 갯수 세기
 * http://ascode.org/problem.php?cid=1008&pid=4
 */
#include <stdio.h>
 
int main() {
    int test;
    int num[19][19], w = 0, b = 0;
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            scanf("%d", &num[i][j]);
            if (num[i][j] == 1)
                b++;
            else if (num[i][j] == 2)
                w++;
        }
    }
    printf("%d %d", b, w);
 
    return 0;
}