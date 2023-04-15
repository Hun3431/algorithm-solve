/*
 * 1240: 오븐 시계 #2
 * http://ascode.org/problem.php?id=1240
 */

#include <stdio.h>

int main() {
    int hour, min, time;
    scanf("%d %d", &hour, &min);
    scanf("%d", &time);
    min += time;
    hour += min / 60;
    hour %= 24;
    min %= 60;
    if(hour < 12) printf("AM %d:%d\n", hour, min);
    else printf("PM %d:%d\n", (hour % 12 == 0)?12:hour % 12, min);
    
    
    return 0;
}
