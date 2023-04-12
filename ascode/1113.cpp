/*
 * 문제 B: 같은 정수 세기
 * http://ascode.org/problem.php?cid=1007&pid=1
 */
#include <stdio.h>
 
 
int main() {
    int test;
    int num[100] = { 0 };
    scanf("%d", &test);
    while (test--) {
        int user, cheak, count=0;
        scanf("%d", &user);
        for (int i = 0; i < user; i++) {
            scanf("%d", &num[i]);
        }
        scanf("%d", &cheak);
        for (int i = 0; i < user; i++) {
            if (num[i] == cheak)
                count++;
        }
        if(count==0){
            printf("None\n");
        }
        else{
            printf("%d\n", count);
        }
    }
    return 0;
}