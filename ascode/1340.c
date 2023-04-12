/* 
 * 1340: 직각 삼각형의 내접원 반지름 구하기
 * http://ascode.org/problem.php?id=1340
 */
#include <stdio.h>
 
int main() {
    int testcase;
    scanf("%d", &testcase);
     
    while (testcase--) {
        int a, b, c, r;
        scanf("%d %d %d", &a, &b, &c);
         
        int max = a;
        int min1 = b, min2 = c;
        if(max < b){
            max = b;
            min1 = a;
        }
        if(max < c){
            max = c;
            min1 = a;
            min2 = b;
        }
        int sq_max = max * max, sq_min1 = min1 * min1, sq_min2 = min2 * min2;
        // 직각 삼각형(피타고라스 공식)
        if(sq_max == sq_min1 + sq_min2){
            printf("%d\n", (min1 + min2 - max)/ 2);
        }
        // 삼각형이 불가능
        else if(min1 + min2 <= max){
            printf("No triangle!\n");
        }
        // 직각 삼각형이 아닌 삼각형
        else {
            printf("No right triangle!\n");
        }
    }
     
    return 0;
}