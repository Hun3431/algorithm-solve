/*
 * 1019: 암호화 알고리즘 #1
 * http://ascode.org/problem.php?id=1019
 */
#include <stdio.h>
#include <string.h>
 
int main(void){
    int testcase;
    scanf("%d", &testcase);
    while(testcase--){
        char pw[1024]={NULL};
        scanf("%s", &pw);
        for(int i=0; i<strlen(pw); i++){
            if((int)pw[i]==90)
                pw[i]='A';
            else
                pw[i]=(char)((int)pw[i]+1);
        }
        for(int i=0; i<strlen(pw); i++)
            printf("%c", pw[i]);
        printf("\n");
    }
    return 0;
}