/* 
 * 1016: 자동차 이동 거리 구하기 (기초) #6
 * http://ascode.org/problem.php?id=1016
 */
#include <stdio.h>
 
int main() {
    double meter, time, speed;
 
    scanf("%lf %lf", &speed, &time);
    meter = time * speed;
    printf("%.3lf %.3lf %.2lf", speed, time, meter);
     
    return 0;
}