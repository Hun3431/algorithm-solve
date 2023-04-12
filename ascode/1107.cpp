/*
 * 1107: 메모리 동적할당
 * http://ascode.org/problem.php?id=1107
 */
#include <iostream>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int first, second;
        cin >> first >> second;
        for(int i=0; i<first; i++){
            for(int j=i; j<i+second; j++) cout << j << " ";
            cout << endl;
        }
        cout << endl;
    }
}