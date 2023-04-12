#include <stdio.h>

short table[32][32] = { 0 };

int main() {
    int test;
    
    scanf("%d", &test);
    while (test--) {
        int w, h, r;
        int user_x, user_y;
        int mon[26] = { 0 };
        
        scanf("%d %d %d", &w, &h, &r);
        for(int y = 0; y < h; y ++) {
            for(int x = 0; x < w; x ++) {
                char a;
                scanf("%c", &a);
                if(a == '@'){
                    user_x = x;
                    user_y = y;
                    table[y][x] = 0;
                }
                else if(a == '#'){
                    table[y][x] = 0;
                }
                else if (a == '\n'){
                    x --;
                }
                else {
                    table[y][x] = 1;
                    mon[a - 'A'] ++;
                }
            }
        }
        
        int start_x = user_x - r, start_y = user_y - r, end_x = user_x + r + 1, end_y= user_y + r + 1;
        
        if(start_x < 0) start_x = 0;
        if(start_y < 0) start_y = 0;
        if(end_x > w) end_x = w;
        if(end_y > h) end_y = h;
        
        int num = 0;
        
        for(int y = start_y; y < end_y; y ++) {
            for(int x = start_x; x < end_x; x ++) {
                num += table[y][x];
            }
        }
        
        for(int i = 0; i < 26; i ++) {
            if(mon[i] != 0){
                printf("%c %d\n", i + 'A', mon[i]);
            }
        }
        if(num > 0)
            printf("Monsters Nearby %d\n", num);
        
        printf("\n");
        for(int y = 0; y < h; y ++) {
            for(int x = 0; x < w; x ++) {
                table[y][x]=0;
            }
        }
    }
    return 0;
}
