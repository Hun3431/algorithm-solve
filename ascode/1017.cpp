/*
 * 1017: 반복문 다루기 # 1 (입력값 그대로 출력하기)
 * http://ascode.org/problem.php?id=1017
 */
#include<stdio.h>
 
int main(){
    int test_case, num;
     
    scanf("%d",&test_case);
    for(int i=0;i<test_case;i++){
        scanf("%d",&num);
        printf("%d\n", num);
    }
    return 0;
}