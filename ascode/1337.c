/* 
 * 1337: 최근접 점의 쌍 찾기-easy
 * http://ascode.org/problem.php?id=1337
 */
#include <stdio.h>
 
typedef struct {
    int x;
    int y;
}Point;
 
Point p[5000];
 
int main() {
    int num;
    int len = 400000000;
    Point p1, p2;
    scanf("%d", &num);
     
    for(int i = 0; i < num; i ++) {
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    for(int i = 0; i < num - 1; i ++) {
        for(int j = i + 1; j < num; j ++) {
            int plen = (p[i].y - p[j].y) * (p[i].y - p[j].y) + (p[i].x - p[j].x) * (p[i].x - p[j].x);
            if(plen < len) {
                len = plen;
                p1 = p[i];
                p2 = p[j];
            }
        }
    }
    // p1이 앞
    if(p1.x < p2.x) {
        printf("(%d, %d) (%d, %d)", p1.x, p1.y, p2.x, p2.y);
    } else if(p1.x == p2.x) {
        if(p1.y < p2.y){
            printf("(%d, %d) (%d, %d)", p1.x, p1.y, p2.x, p2.y);
        }
        else{
            printf("(%d, %d) (%d, %d)", p2.x, p2.y, p1.x, p1.y);
        }
    }
    // p2가 큼
    else{
        printf("(%d, %d) (%d, %d)", p2.x, p2.y, p1.x, p1.y);
    }
     
     
    return 0;
}