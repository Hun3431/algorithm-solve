/*
 * 1091: 올바른 점수만 평균 구하기
 * http://ascode.org/problem.php?id=1091
 */
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    for(;;){
        int user[500], sum=0, count=0, test;
        scanf("%d", &test);
        if(test==0)
            break;  
        for(int i=0; i<test; i++){
            scanf("%d", &user[i]);
            if(user[i]<=100&&user[i]>=0){
                sum+=user[i];
                count++;
            }
        }
        printf("%.2lf\n", (double)sum/count);
    }
    return 0;
}