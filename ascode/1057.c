/*
 * 1057: 별 찍기 - 안이 빈 삼각형
 * http://ascode.org/problem.php?id=1057
 */
#include<stdio.h>
 
int print_star(int n){      //별 출력 함수 
    for(int i=0;i<n;i++)
        printf("*");
}
int print_space(int n){     //공백 출력 함수 
    for(int i=0;i<n;i++)
        printf(" ");
}
 
int main(void) {
    int star, line, test;
     
    scanf("%d", &test); 
    for(int i=0; i<test; i++){
        scanf("%d", &line);
        for(int j=0;j<line;j++){  
            if (j==0){  
                printf("*"); 
            }
            else if(j==line-1)
                print_star(line);
            else{
                printf("*");
                print_space(j-1);
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}