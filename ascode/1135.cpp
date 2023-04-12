/*
 * 문제 B: 追羊 #2
 * http://ascode.org/problem.php?cid=1010&pid=1
 */
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int x, y; cin >> x >> y;
        int xn=0, yn=0;
        char str[101]; cin >> str;
        for (int i = 0; i < strlen(str); i++) {
            switch (str[i]) {
            case 'L':
                xn--;
                break;
            case 'R':
                xn++;
                break;
            case 'U':
                yn++;
                break;
            case 'D':
                yn--;
                break;
            }
        }
        cout << xn << " " << yn << endl;
    }
    return 0;
}