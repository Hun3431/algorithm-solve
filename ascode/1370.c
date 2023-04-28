/*
 * 1370: 팰린드롬 숫자 #1
 * http://ascode.org/problem.php?id=1370
 */
#include<stdio.h>

int main(void){
    int num, reverse = 0;
    scanf("%d", &num);
    int cnum = num;
    
    while(num != 0){
        reverse *= 10;
        reverse += num % 10;
        num /= 10;
    }
    
    if(reverse == cnum) printf("Palindrome!\n");
    else printf("No palindrome!\n");
    return 0;
}
