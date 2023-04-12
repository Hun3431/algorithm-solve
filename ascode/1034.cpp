/*
 * 1034: 아스키 코드 변환 #1
 * http://ascode.org/problem.php?id=1034
 */
#include <stdio.h>
 
int nlen(int num){
    int len=0;
    while(num!=0){
        num=num/10;
        len++;
    }
    return len;
}
 
int main(void) {
    int testcase;
    scanf("%d", &testcase);
    while(testcase--){
        int num, len, sum=0, x[8]={1,2,4,8,16,32,64,128};
        scanf("%8d", &num);
        len=nlen(num);
        sum+=num%10*x[0];
        for(int i=1; i<len; i++){
            num/=10;
            sum+=num%10*x[i];
        }
        printf("%c\n", sum);
         
    }
    return 0;
}