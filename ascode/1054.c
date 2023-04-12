/*
 * 1054: 별 찍기 - 안이 빈 사각형
 * http://ascode.org/problem.php?id=1054
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
        scanf("%d %d", &star, &line);
        for(int j=0;j<line;j++){  
            if(j==0||j==line-1)
                print_star(star);
            else if(star==1){
                printf("*");
            }
            else{
                printf("*");
                print_space(star-2);
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}