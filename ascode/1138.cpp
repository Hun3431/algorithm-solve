/*
 * 문제 A: 숫자 개수 세기
 * http://ascode.org/problem.php?cid=1010&pid=0
 */
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    int num[100] = { 0 };
    for (int i = 0; i < t; i++) {
        cin >> num[i];
    }
    int start, last;
    cin >> start >> last;
    if (start > last) {
        int temp = start;
        start = last;
        last = temp;
    }
    int count = 0;
    for (int i = 0; i < t; i++) {
        if (num[i] >= start&&num[i] <= last) {
            count++;
        }
    }
    cout << count;
    return 0;
}