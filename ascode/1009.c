#include<stdio.h>

int main(void) {
    int test;

    scanf("%d", &test);
    while(test--) {
        char c;
        scanf(" %c", &c);
        if (c<95)    //대문자 
            printf("%c\n", c+32);
        else         //소문자 
            printf("%c\n", c-32);
    }
    return 0;
}