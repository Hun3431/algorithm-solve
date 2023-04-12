/*
 * 문제 C: 홀수만 내림차순으로 출력하기
 * http://ascode.org/problem.php?cid=1007&pid=2
 */
#include <stdio.h>
#include <algorithm>
 
using namespace std;
int main() {
    int test, s;
    int num[100] = { 0 }, user[100]={ 0 };
    scanf("%d", &test);
    while (test--) {
        int cheak, cycle, count=0;
        scanf("%d", &cycle);
        for (int i = 0; i < cycle; i++) {
            scanf("%d", &s);
            if(s%2==1){
                user[count]=s;
                count++;
            }
        }
        sort(user, user+count);
        if(count==0)
            printf("None\n");
        else{
            for(int i=0, j=count-1; i<count; i++, j--){
                num[j]=user[i];
            }
            for(int i=0; i<count; i++)
                printf("%d ", num[i]);
            printf("\n");
        }
    }
    return 0;
}