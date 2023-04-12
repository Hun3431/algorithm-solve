/*
 * 1118: 숫자 찾기#2
 * http://ascode.org/problem.php?id=1118
 */
#include <stdio.h>
#include <algorithm>
using namespace std;
 
int num[1500000], target[10000];
int main() {
    int m, n, cnt = 0;
 
    scanf("%d %d", &m, &n);
 
    for (int i = 0; i < m; i++) 
        scanf("%d", &num[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &target[i]);
    
    sort(num, num + m);
 
    for (int i = 0; i < n; i++) {
        int min = 0, max = m-1, mid;
       
        while (min <= max) {
            mid = (min + max) / 2;
 
            if (num[mid] == target[i]) {
            cnt++;
            break;
            }
            else if (num[mid] < target[i])
                min = mid + 1;
            else
                max = mid - 1;
        }
    }
    printf("%d", cnt);
    return 0;
}