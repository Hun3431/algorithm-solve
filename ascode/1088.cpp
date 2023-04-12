/*
 * 1088: 최대, 최소의 차이는 3의 배수?
 * http://ascode.org/problem.php?id=1088
 */
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int num[50]={0};
    int user;
    while(1){
        scanf("%d", &user);
        if(user==0)
            break;
        for(int i=0; i<user; i++){
            scanf("%d", &num[i]);
        }
        sort(num, num+user);
        if(num[0]==num[user-1])
            printf("Same\n");
        else{
            if((num[user-1]-num[0])%3==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}