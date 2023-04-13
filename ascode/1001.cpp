/*
 * 1001: 나는 차차를 싫어해!
 * http://ascode.org/problem.php?id=1001
 */
#include <iostream>
#include <string>
using namespace std;
 
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    while(n--){
        string str, filter, cp;
        int count = 0;
        cin >> str;
        filter.assign(str);
        cp.assign(str);
        int len = cp.length();
        for(int i=0; i<len; i++) if(filter.at(i)<95) filter.at(i)+=32;
        //cout << filter;
        //cout << filter.find("char");
        while(filter.find("char") != -1){
            //cout << count << filter << "  ";
            int cha = filter.find("char");
            //cout << cha << "  ";
            filter.erase(cha,4);
            cp.erase(cha,4);
            //cout << filter <<endl;
            count++;
        }
        if(count > 1){
            if(cp.length()) cout << cp << endl;
            else cout << "I Hate CharChar!" << endl;
        }
        else cout << str << endl;
    }
    return 0;
}