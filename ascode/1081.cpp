/*
 * 1081: 좋은 추천 번호인가?
 * http://ascode.org/problem.php?id=1081
 */
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    int user[6], count=0;
    for(int i=0; i<6; i++){
        scanf("%d", &user[i]);
        if(user[i]>45||user[i]<1)
            count++;
    }
    sort(user, user+6);
    for(int i=0; i<5; i++){
        if(user[i]==user[i+1])
            count++;
    }
    if(count==0){
        for(int i=0; i<6; i++){
            printf("%d ", user[i]);
        }
    }
    else
        printf("BAD!");
    return 0;
}