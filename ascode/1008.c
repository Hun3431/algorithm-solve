#include<stdio.h>
 
int main(void){
    int a, b, c, d, e, f;
    float result=0;
    
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    result=a+b+c+d+e+f;
    result=result/6;

    printf("%.4f", result);
    return 0;
}