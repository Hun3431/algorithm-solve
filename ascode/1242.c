/*
 * 1242: 주사위 게임
 * http://ascode.org/problem.php?id=1242
 */

#include <stdio.h>

int main() {
    int a, b, c, money = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b) {
        if (b == c) money += 20000 +(2000 * a);
        else money += 5000 +(2000 * a);
    }
    else if(b == c) money += 5000 +(2000 * c);
    else if(a == c) money += 5000 +(2000 * a);
    else{
        int arr[6] = { 0 };
        arr[a-1] = 1;
        arr[b-1] = 1;
        arr[c-1] = 1;
        int count = 0;
        for(int i = 0; i < 5; i ++) {
            if(arr[i] == 1){
                count ++;
                if(count == 2)
                    money += (i + 1) * 500;
            }
        }
    }
    printf("%d\n", money);
    return 0;
}
