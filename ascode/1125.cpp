/*
 * 문제 F: 삼목(tic-tac-toe) 게임 판정하기-Easy
 * http://ascode.org/problem.php?cid=1008&pid=5
 */
#include <stdio.h>
 
int main() {
    int test;
    int num[3][3];
    scanf("%d", &test);
    while (test--) {
        int Ascore = 0, Bscore = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &num[i][j]);
            }
        }
        for (int i = 0; i < 3; i++) {
            int count = 0;
            for (int j = 0; j < 3; j++) {
                if (num[i][j] == 1) {
                    count++;
                }
            }
            if (count == 3)
                Ascore=1;
        }
        for (int i = 0; i < 3; i++) {
            int count = 0;
            for (int j = 0; j < 3; j++) {
                if (num[j][i] == 1) {
                    count++;
                }
            }
            if (count == 3)
                Ascore=1;
        }
        for (int i = 0; i < 3; i++) {
            int count = 0;
            for (int j = 0; j < 3; j++) {
                if (num[i][j] == 2) {
                    count++;
                }
            }
            if (count == 3)
                Bscore=1;
        }
        for (int i = 0; i < 3; i++) {
            int count = 0;
            for (int j = 0; j < 3; j++) {
                if (num[j][i] == 2) {
                    count++;
                }
            }
            if (count == 3)
                Bscore=1;
        }
        if ((num[0][0] == num[1][1] && num[1][1] == num[2][2]) || (num[2][0] == num[1][1] && num[1][1] == num[0][2])) {
            if (num[1][1] == 1) {
                Ascore=1;
            }
            else
                Bscore=1;
        }
        if (Ascore > Bscore)
            printf("1\n");
        else if (Ascore == Bscore)
            printf("draw!\n");
        else
            printf("2\n");
    }
    return 0;
}