/*
 * 문제 F: 자판기
 * http://ascode.org/problem.php?cid=1009&pid=5
 */
#include<iostream>
#include<string.h>
using namespace std;
 
struct menu {
    char name[16];
    int price;
};
 
int main() {
    menu m[10];
    int testcase; cin >> testcase;
    while (testcase--) {
        int menu_num; cin >> menu_num;
        for (int i = 0; i < menu_num; i++) {
            cin >> m[i].name >> m[i].price;
        }
        int sum = 0;
        int buy; cin >> buy;
        for (int i = 0; i < buy; i++) {
            char buy_menu[16];
            int num; cin >> buy_menu >> num;
            for (int j = 0; j < menu_num; j++) {
                if (strcmp(buy_menu, m[j].name) == 0) {
                    sum += m[j].price*num;
                    break;
                }
            }
        }
        printf("%d\n", sum);
    }
 
}