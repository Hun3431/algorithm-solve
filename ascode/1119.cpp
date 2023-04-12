/*
 * 문제 B: 과잉수 찾기
 * http://ascode.org/problem.php?cid=1008&pid=1
 */
#include <stdio.h>
 
int number(int x) {
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    if (sum > x)
        return 1;
    return 0;
}
 
int main(int argc, char** argv) {
    int test;
    int a, b, temp;
    scanf("%d", &test);
    while (test--) {
        int sum = 0;
        scanf("%d %d", &a, &b);
        if (a > b) {
            for (int j = b; j <= a; j++) {
                sum += number(j);
            }
            printf("%d-%d:%d\n", a, b, sum);
        }
        else {
            for (int j = a; j <= b; j++) {
                sum += number(j);
            }
            printf("%d-%d:%d\n", a, b, sum);
        }
    }
     
    return 0;
}