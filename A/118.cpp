#include <iostream>
#include <stdio.h>
using namespace std;
int main(void){
    int a, b; cin >> a >> b;
    if (b % a == 0) {
        cout << a + b << endl;
    } else {
        cout << b - a <<  endl;
    }
}
