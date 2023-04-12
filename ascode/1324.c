/*
 * 1324: 알람 시계 #2
 * http://ascode.org/problem.php?id=1324
 */
#include <stdio.h>
 
int main() {
    int testcase;
    scanf("%d", &testcase);
     
    while (testcase--) {
        int hour, min;
        scanf("%d %d", &hour, &min);
        min -= 45;
        if(min < 0) {
            min += 60;
            hour -= 1;
        }
        if(hour < 0) hour += 24;
         
        printf("%d:%d\n", hour, min);
    }
    return 0;
}