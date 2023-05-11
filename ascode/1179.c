/*
 * 1179: 3 6 9 게임
 * http://ascode.org/problem.php?id=1053
 * 반복문 사용
 */
#include<stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i ++) {
        if(i % 3 == 0 || i / 10 == 3 || i % 10 == 3) printf("%d ", i);
    }
    return 0;
}
