/*
 * 1033: 대소문자 변경 HARD
 * http://ascode.org/problem.php?id=1033
 */
/*
 * 팁1 scanf()와 printf() 를 할때도 많은 시간이 소요되므로 문자열에 저장하여 한번에 출력!
 * 팁2 아스키 코드의 2진수를 비교해보면 소문자 xor ' ' => 대문자 , 대문자 xor ' ' => 소문자임을 알 수 있음.
 * (비트연산자가 조건문보다 느림)
 * 아스키코드 https://www.ibm.com/docs/ko/aix/7.1?topic=adapters-ascii-decimal-hexadecimal-octal-binary-conversion-table
 * C언어 최적화 https://velog.io/@jhon3242/C-코드-최적화
 */

// 실행 시간 675ms
#include <stdio.h>

int main() {
   unsigned t, i;
   char str[20001];

   scanf("%u", &t);
   while (t--) {
      scanf("%s", str);
      for (i = 0; str[i] != '\0'; i++) {
         str[i] = (str[i] > 96) ? str[i] - 32 : str[i] + 32;
      }
      printf("%s\n", str);
   }
   return 0;
}

/* 실행 시간 809ms
int main() {
    char str[20001], bit = ' ';
    unsigned t, i;
    
    scanf("%u", &t);
    while(t--) {
        scanf("%s", str);
        for(i = 0; str[i] != '\0'; str[i++] ^= bit);
        printf("%s\n", str);
    }
    return 0;
}
*/