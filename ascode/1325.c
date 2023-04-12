/*
 * 1325: 나머지 #2
 * http://ascode.org/problem.php?id=1325
 */
#include <stdio.h>
 
int main() {
    short arr[42] = { 0 };
     
    for(int i = 0; i < 10; i ++) {
        int num;
        scanf("%d", &num);
        arr[num%42] = 1;
    }
    int count = 0;
    for(int i = 0; i < 42; i ++) {
        count += arr[i];
    }
    printf("%d", count);
    return 0;
}