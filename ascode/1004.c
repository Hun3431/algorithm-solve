#include <stdio.h>

int main() {
    int test;
    
    scanf("%d", &test);
    while (test--) {
        int time;
        int a_cycle, b_cycle, c_cycle;
        
        scanf("%d", &time);
        scanf("%d %d %d", &a_cycle, &b_cycle, &c_cycle);
        for(int i = 1; i <= time; i ++) {
            if(i % a_cycle == 0)
                printf("A");
            if(i % b_cycle == 0)
                printf("B");
            if(i % c_cycle == 0)
                printf("C");
        }
        printf("\n");
    }
    return 0;
}
