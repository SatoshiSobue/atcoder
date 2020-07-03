#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
using namespace std;

int main(void) {
    int n; cin >> n;
    if (n == 1) {
        cout << "Hello World" << endl;
        return 0;
    } else {
        int a,b; cin >> a >> b;
        cout << a + b << endl;
        return 0;
    }
}
