/* 
 * 문제 C: 변환
 * http://ascode.org/problem.php?cid=1010&pid=2
 */
#include <iostream>
#include <string.h>
using namespace std;
 
int main(void) {
    int testcase; cin >> testcase;
    for (int i = 0; i<testcase; i++) {
        double num; cin >> num;
        double result = 0;
        char str[3]; cin >> str;
        char cstr[3];
        if (strcmp(str, "kg") == 0) {
            result = num*2.2046;
            printf("%d %.4lf lb\n", i + 1, result);
        }
        else if (strcmp(str, "lb") == 0) {
            result = num*0.4536;
            printf("%d %.4lf kg\n", i + 1, result);
        }
        else if (strcmp(str, "l") == 0) {
            result = num*0.2642;
            printf("%d %.4lf g\n", i + 1, result);
        }
        else {
            result = num*3.7854;
            printf("%d %.4lf l\n", i + 1, result);
        }
    }
 
    return 0;
}