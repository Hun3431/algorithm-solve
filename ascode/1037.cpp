/*
 * 1037: 시간 계산하기 #2
 * http://ascode.org/problem.php?id=1037
 */
#include<stdio.h>
#include<algorithm>
 
using namespace std;
int main(void) {
    unsigned long long int time;
    int week, day, hour, min, sec;
     
    scanf("%lld", &time);
    week=time/604800;
    time%=604800;
    day=time/86400;
    time%=86400;
    hour=time/3600;
    time%=3600;
    min=time/60;
    time%=60;
    printf("%d %d %d %d %d", week, day, hour, min, time);
    return 0;
}