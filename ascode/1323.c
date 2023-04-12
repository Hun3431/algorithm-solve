/*
 * 1323: 더하기 사이클 #2
 * http://ascode.org/problem.php?id=1323
 */
#include <stdio.h>
 
int main() {
    int testcase;
    scanf("%d", &testcase);
     
    for (int i = 0; i < testcase; i ++) {
        int num = 0;
        int count = 0;
        scanf("%d", &num);
        int copy = num;
        do{
            copy = (copy % 10)* 10 + (copy / 10 + copy % 10)% 10;
            count++;
        } while(copy != num);
        printf("#%d: %d\n", i + 1, count);
    }
    return 0;
}