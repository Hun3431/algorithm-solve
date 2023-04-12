/*
 * 문제 A: 친구관계
 * http://ascode.org/problem.php?cid=1009&pid=0
 */
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
 
void change(char *N1, char *N2){
    char temp[100];
    if(strlen(N2)>strlen(N1)){
        strcpy(temp, N2);
        strcpy(N2, N1);
        strcpy(N1, temp);
    }
}
int sum(char *N1, char *N2){
    int num=0;
    for(int i=0; i<strlen(N1); i++){
        N1[i]=(1)+(N1[i]-'A')*2;
    }
    for(int i=0; i<strlen(N2); i++){
        N2[i]=(1)+(N2[i]-'A')*2;
    }
    for(int i=0; i<strlen(N1); i++){
        int n;
        if(i<strlen(N2)){
            if(N1[i]>N2[i]) n=(N1[i]-N2[i]);
            else n=N2[i]-N1[i];
        }
        else
            n=N1[i];
        num+=n;
    }
    return num;
}
int main(void){
    int testcase; cin >> testcase;
    for(int i=0; i<testcase; i++){
        char N1[100]; cin >> N1;
        char N2[100]; cin >> N2;
        change(N1, N2);
        printf("%d\n",sum(N1, N2));
    }
     
    return 0;
}