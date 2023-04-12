/*
 * 1021: 암호화 알고리즘 #2
 * http://ascode.org/problem.php?id=1021
 */
#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int test; cin >> test;
    while (test--) {
        string value; cin >> value;
        string key; cin >> key;
        int value_size = value.length();
        int key_size = key.length();
        for (int i = 0, j = 0; i < value_size; value[i++] ^= key[j++]) if (key_size == j) j = 0;
        cout << value << endl;
    }
}