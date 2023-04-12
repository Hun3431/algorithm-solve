/*
 * 1097: 돈 모으기 대작전
 * http://ascode.org/problem.php?id=1097
 */
#include <iostream>
#include <queue>
using namespace std;
 
int main() {
    queue<pair<int,int>> q;
    int sum = 0;
    int money;
    while(scanf("%d", &money)){
        sum += money;
        q.push({money, sum});
    }
    cout << "======================" << endl;
    cout << "입금\t출금\t잔고" << endl;
    cout << "======================" << endl;
     
    while(!q.empty()){
        int num1 = q.front().first;
        int num2 = q.front().second;
        q.pop();
        if(num1 >= 0) {
            cout << num1 << "\t";
        }
        else {
            cout << "\t" << -num1;
        }
        cout << "\t" << num2 << endl;
    }
    cout << "======================";
    return 0;
}