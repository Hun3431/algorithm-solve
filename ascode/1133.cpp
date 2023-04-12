/*
 * 문제 E: 영문 채점
 * http://ascode.org/problem.php?cid=1009&pid=4
 */
#include <iostream>
#include <string.h>
using namespace std;
 
struct english {
    char word[21];
    int score;
};
english e[10];
void scan_word(int num) {
    for (int i = 0; i < num; i++) {
        cin >> e[i].word >> e[i].score;
    }
}
int sum(char *p, int num) {
    for (int i = 0; i < num; i++) {
        if (strcmp(e[i].word, p) == 0) {
            return e[i].score*-1;
        }
    }
    return strlen(p);
}
int main() {
    int word_num, line_num; cin >> word_num >> line_num;
    scan_word(word_num);
    while (line_num--) {
        int result = 0;
        while (1) {
            char str[21]; cin >> str;
            if (str[0] == '.') break;
            result += sum(str, word_num);
        }
        if (result<0) printf("Fail\n");
        else printf("%d\n", result);
    }
}