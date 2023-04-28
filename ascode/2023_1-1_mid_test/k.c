/*
 * 문제 K: 팰린드롬 숫자 #1
 * http://ascode.org/problem.php?cid=1045&pid=10
 */
#include<stdio.h>

int main(void){
    int num, reverse = 0;
    scanf("%d", &num);
    int cnum = num;
    
    reverse += num % 10;
    reverse *= 10;
    num /= 10;
    reverse += num % 10;
    reverse *= 10;
    num /= 10;
    reverse += num % 10;
    reverse *= 10;
    num /= 10;
    reverse += num % 10;
    reverse *= 10;
    num /= 10;
    reverse += num % 10;
    num /= 10;
    
    if(reverse == cnum) printf("Palindrome!\n");
    else printf("No Palindrome!\n");
    return 0;
}
