/*
 * 문제 E: 최대, 최소의 합은 7의 배수?
 * http://ascode.org/problem.php?cid=1007&pid=4
 */
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int test, s;
    int num[50];
    scanf("%d", &test);
    while (test--) {
        int x, y, count=0, cycle, sum=0;
        scanf("%d", &cycle);
        for (int i = 0; i < cycle; i++) {
            scanf("%d", &num[i]);
            sum+=num[i];
        }
        sort(num, num+cycle);
        if(num[0]<0||num[cycle-1]<0){
            printf("HMM!\n");
        }
        else if(sum==0){
            printf("ZERO\n");
        }
        else if((num[cycle-1]+num[0])%7==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
             
             
         
    }
    return 0;
}