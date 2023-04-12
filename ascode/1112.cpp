/*
 * 문제 A: 다이빙 점수 매기기
 * http://ascode.org/problem.php?cid=1007&pid=0
 */
#include <stdio.h>
#include <algorithm>
#define cycle 7
 
using namespace std;
int main() {
    int test;
    int num[cycle]={0};
    scanf("%d", &test);
    while (test--) {
        int sum=0;
        int s=7;
        for(int i=0; i<7; i++){
            scanf("%d", &num[i]);
        }
        sort(num, num+7);
        if(num[6]-num[0]>=5){
            if(num[5]-num[1]>=5){
                for(int i=2; i<5; i++){
                    sum+=num[i];
                    s=3;
                }
            }
            else{
                for(int i=1; i<6; i++){
                    sum+=num[i];
                    s=5;
                }
            }
        }
        else{   
            for(int i=0; i<7; i++){
                sum+=num[i];
                s=7;
            }
        }
        printf("%d\n", sum/s);
         
    }
    return 0;
}