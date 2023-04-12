/*
 * 1013: 우리들의 학번은 무엇이지?
 * http://ascode.org/problem.php?id=1013
 */
#include <stdio.h>
 
int main(void){
    int testcase;
    scanf("%d", &testcase);
    while(testcase--){
        char student[8]={NULL};
        scanf("%s", &student);
        printf("%c%c\n", student[2], student[3]);
    }
    return 0;
}