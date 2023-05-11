/*
 * 1089: 3n+1 문제
 * http://ascode.org/problem.php?id=1089
 * 반복문 사용
 */
#include<stdio.h>

int main(void){
    int test;
    scanf("%d", &test);
    
    while (test--) {
        int i, j;
        scanf("%d %d", &i, &j);
        
        if(j > i) {
            int temp = i;
            i = j;
            j = temp;
        }
        
        int max = 0, min = __INT_MAX__;
        
        for(int num = j; num <= i; num ++) {
            int count = 1;
            int cnum = num;
            
            while(cnum != 1) {
                if (cnum % 2)  cnum = cnum * 3 + 1;
                else cnum /= 2;
                count ++;
            }
            
            if(count < min) min = count;
            if(count > max) max = count;
        }
        printf("%d %d\n", max, min);
    }
    return 0;
}
