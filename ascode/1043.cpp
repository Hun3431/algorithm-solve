/*
 * 1043: 비밀 지도
 * http://ascode.org/problem.php?id=1043
 */
#include <iostream>
#include <string>
using namespace std;
 
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    bool arr1[16][16]={0};
    bool arr2[16][16]={0};
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        int count = n;
        while(count){
            count--;
            arr1[i][count]=num%2;
            num=num/2;
        }
    }
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        int count = n;
        while(count){
            count--;
            arr2[i][count]=num%2;
            num=num/2;
        }
    }
    for(int i=0; i<n;i++){
        cout << "[";
        for(int j=0; j<n; j++){
            if(arr1[i][j]||arr2[i][j]) cout << "#";
            else cout << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}