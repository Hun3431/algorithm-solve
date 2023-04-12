/*
 * 문제 B: 단위 변환
 * http://ascode.org/problem.php?cid=1009&pid=1
 */
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    while(testcase--){
        double num; cin>>num;
        char c[3]; cin>>c;
        if (strcmp(c, "cm")==0){
            num*=10;
        }
        else if (strcmp(c, "m")==0){
            num*=1000;
        }
        else if (strcmp(c, "km")==0){
            num*=1000000;
        }
        printf("%.lf\n", floor(num));
    }
    return 0;
}