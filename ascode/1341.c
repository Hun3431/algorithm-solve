/*
 * 1341: 행렬의 합 - easy
 * http://ascode.org/problem.php?id=1341
 */
#include <stdio.h>
 
int main() {
    int x, y;
    int arr[10][10];
    scanf("%d %d", &y, &x);
     
    for(int i = 0; i < y; i ++) {
        for(int j = 0; j < x; j ++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < y; i ++) {
        for(int j = 0; j < x; j ++) {
            int num;
            scanf("%d", &num);
            arr[i][j] += num;
        }
    }
    for(int i = 0; i < y; i ++) {
        for(int j = 0; j < x; j ++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}