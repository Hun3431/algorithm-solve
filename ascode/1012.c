/* 
 * 1012: 시간이 얼마나 흘렀지?
 * http://ascode.org/problem.php?id=1012
 */
#include <stdio.h>
 
int main() {
    unsigned int cycle = 0, time = 0, day = 0, hour = 0, min = 0, sec = 0;
 
    scanf("%d", &cycle);
    for (int i = 0; i < cycle; i++) {
        scanf("%d", &time);
        day = time / 86400;
        time = time % 86400;
        hour = time / 3600;
        time = time % 3600;
        min = time / 60;
        sec = time % 60;
        printf("%d day : %d hour : %d min : %d sec\n", day, hour, min, sec);
    }
    return 0;
}