/*
 * 1131: 안전한 영역
 * http://ascode.org/problem.php?id=1131
 */
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    while(testcase--){
        char board[20][20][1]={0};
        int score[20][20]={0};
        int garo, sero; cin >> sero >> garo;
        for(int i=0; i<sero; i++){
            for(int j=0; j<garo; j++){
                char c; scanf(" %c", &c);
                if(c=='*'){
                    board[i][j][0]='*';
                    for(int k=i-1; k<i+2; k++){
                        for(int l=j-1; l<j+2; l++){
                            if((k>=0&&k<sero)&&(l>=0&&l<garo)){
                                if(board[k][l][0]!='*')
                                    score[k][l]=1;
                            }
                        }
                    }
                }
            }
        }
        for(int i=0; i<sero; i++){
            for(int j=0; j<garo; j++){
                if(board[i][j][0]=='*') cout << "*";
                else cout<<score[i][j];
            }
            printf("\n");
        }
    }
    return 0;
}