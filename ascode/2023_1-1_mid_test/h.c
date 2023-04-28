/*
 * 문제 H: 오븐 시계 #3
 * http://ascode.org/problem.php?cid=1045&pid=7
 */
#include<stdio.h>

int main(void){
    int hour, min, time;
    scanf("%d %d", &hour, &min);
    scanf("%d", &time);
    
    printf("Cook start->");
    if(hour > 11) printf("PM");
    else printf("AM");
    printf("%d:%d\n", hour % 12, min);
    
    min += time;
    hour += min / 60;
    hour %= 24;
    min %= 60;
    
    printf("Cook end->");
    if(hour > 11) printf("PM");
    else printf("AM");
    printf("%d:%d\n", hour % 12, min);
    
    return 0;
}
