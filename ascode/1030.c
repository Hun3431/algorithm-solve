/*
 * 1030: 나는 차차를 싫어해! EASY
 * http://ascode.org/problem.php?id=1030
 */
#include <stdio.h>

char str[1024];
const char charchar[] = "charchar";

int main() {
    int testcase;
    scanf("%d", &testcase);
    while(testcase--) {
        scanf("%s", str);
        int i = 0;
        for (; str[i] != 0; i ++){
            if(str[i] == 'c'){
                short find = 1;
                for(int j = 0; j < 8; j ++) {
                    if(str[i + j] != charchar[j]){
                        find = 0;
                        break;
                    }
                }
                if(find){
                    for(int j = 0; j < 8; j ++) {
                        str[i + j] = 0;
                    }
                    i += 7;
                }
            }
        }
        short print = 0;
        for(int j = 0; j < i; j ++) {
            if(str[j] != 0){
                printf("%c", str[j]);
                print = 1;
            }
        }
        if(!print) printf("i hate charchar");
        printf("\n");
        
    }
    return 0;
}
