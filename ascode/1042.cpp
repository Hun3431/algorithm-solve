/*
 * 1042: 등차수열
 * http://ascode.org/problem.php?id=1042
 */
#include<stdio.h>
#include<algorithm>
 
using namespace std;
int main(void) {
    int sum=3, user;
     
    scanf("%d", &user);
    for(int i=1; i<user; i++)
        sum+=4;
    printf("%d", sum);
    return 0;
}