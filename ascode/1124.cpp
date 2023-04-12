/*
 * 문제 A: 키다리 아저씨
 * http://ascode.org/problem.php?cid=1008&pid=0
 */
#include <stdio.h>
#include <algorithm>
using namespace std;
 
int main(int argc, char** argv) {
    int num[1000] = { 0 };
    int test, cheak;
 
    scanf("%d", &test);
    for (int i = 0; i<test; i++) {
        scanf("%d", &num[i]);
    }
    sort(num, num + test);
    scanf("%d", &cheak);
    printf("%d", num[test - cheak]);
    return 0;
}