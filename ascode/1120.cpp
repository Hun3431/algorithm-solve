/*
 * 문제 D: 제법 평범한 놈 찾기
 * http://ascode.org/problem.php?cid=1008&pid=3
 */
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int cycle, num, min_number, sum;
    double result, min;
    int user[20] = { 0 };
 
    scanf("%d", &cycle);
    for (int i = 0; i<cycle; i++)
    {
        scanf("%d", &num);
        for (int j = 0; j < num; j++) {
            scanf("%d", &user[j]);
        }
        sort(user, user + num);
        sum = 0;
        for (int j = 1; j < num-1; j++) {
            sum += user[j];
        }
        result = (double)sum / (num-2);     //입력한 수의 평균
        min = fabs(result - (double)user[0]);   //절댓값
        min_number = user[0];
        for (int j = 0; j < num; j++) {
            if (min > fabs(result - (double)user[j])) {
                min = fabs(result - (double)user[j]);
                min_number = user[j];
            }
        }
        printf("%d\n", min_number);
 
    }
    return 0;
}