/*
 * 문제 E: Mine Sweeper
 * http://ascode.org/problem.php?cid=1010&pid=4
 */
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
    int testcase; cin>>testcase;
    while(testcase--){
        char board[30][30][1]={0};
        int score[30][30]={0};
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
                                    score[k][l]++;
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