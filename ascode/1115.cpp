/*
 * 문제 D: 전치행렬 구하기
 * http://ascode.org/problem.php?cid=1007&pid=3
 */
#include <stdio.h>
 
int main() {
    int test, s;
    int num[10][10], user[10][10];
    scanf("%d", &test);
    while (test--) {
        int x, y, count=0;
        scanf("%d %d", &y, &x);
        for (int i = 0; i < y; i++) {
            for(int j=0; j<x; j++){
                scanf("%d", &num[i][j]);
            }
        }
        for (int i = 0; i < x; i++) {
            for(int j=0; j < y; j++){
                if(num[i][j]==num[j][i]){
                    count++;
                }
            }
        }
        if(count==x*y)
            printf("Identical\n");
        else{
            for (int i = 0; i < x; i++) {
                for(int j=0; j < y; j++){
                    printf("%d ", num[j][i]);
                }
                printf("\n");
            }
        }
         
    }
    return 0;
}