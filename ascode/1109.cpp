/*
 * 1109: 암호화 알고리즘 #3
 * http://ascode.org/problem.php?id=1109
 */
#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
 
void mkey(char *p, char *k, int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (k[count] == NULL) count = 0;
        p[i] = k[count];
        count++;
    }
    p[len] = NULL;
}
void up(char *p) {
    for (int i = 0; i < strlen(p); i++) p[i] = toupper(p[i]);
}
void pw(char *str, char *key) {
    for (int i = 0; i < strlen(str); i++) {
        int num = str[i] + key[i] - 'A';
        if (num > 'Z') num -= ('Z' - 'A'+1);
        str[i] = num;
    }
}
int main()
{
    int t; cin >> t;
    char str[501];
    char keyword[501];
    char key[11];
    while (t--) {
        cin >> key >> str;
        int len = strlen(str);
        mkey(keyword, key, len);
        up(keyword);
        up(str);
        pw(str, keyword);
        cout << str << endl;
    }
}