/*
 * 1006: 문자열중 문자의 갯수 구하기
 * http://ascode.org/problem.php?id=1006
 */
#include <stdio.h>

char word[2000];

int main() {
    int test;
    
    scanf("%d ", &test);
    while (test--) {
        int num[26] = {0};
        scanf("%s", word);
        
        for(int i = 0; word[i] != '\0'; num[word[i++]-'a']++);
        
        for(int i = 0; i < 26; i ++)
            if(num[i] != 0)
                printf("%c:%d\n", 'a' + i, num[i]);
        printf("\n");
    }
    return 0;
}


/*
 #include <stdio.h>
  
 int main() {
     int test;
      
     scanf("%d ", &test);
     while (test--) {
         char c = 0;
         int num[26] = { 0 };
         do {
             scanf("%c", &c);
             if(c != '\n')
                 num[c - 'a'] ++;
         } while(c != '\n' || c != EOF);
          
         for(int i = 0; i < 26; i ++) {
             if(num[i] != 0)
                 printf("%c:%d\n", 'a' + i, num[i]);
         }
         printf("\n");
     }
     return 0;
 }
 */
