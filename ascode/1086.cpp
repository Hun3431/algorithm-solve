/*
 * 1086: 계단 그리기
 * http://ascode.org/problem.php?id=1086
 */
#include <stdio.h>
 
void star(int x){
    for(int i=0; i<2; i++){
        for(int j=0; j<x; j++){
            printf("%c%c", 35, 35);
        }
        printf("\n");
    }
}
int main(int argc, char** argv) {
    int test, user;
    scanf("%d", &test);
    while(test--){
        scanf("%d", &user);
        for(int i=1; i<=user; i++){
            star(i);
        }
        printf("\n");
    }
 
    return 0;
}