/*
 * 1005: 시분할 연습 #2
 * http://ascode.org/problem.php?id=1005
 */
#include <stdio.h>

int main() {
    int test;
    
    scanf("%d", &test);
    while (test--) {
        int time, num;
        int cycle[10] = {0};
        
        scanf("%d %d", &time, &num);
        for(int i = 0; i < num; scanf("%d", &cycle[i++]));
        for(int i = 1; i <= time; i ++) {
            for(int j = 0; j < num; j ++)
                if(i % cycle[j] == 0)
                    printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
