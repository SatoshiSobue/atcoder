#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
using namespace std;
int main(void){
    int r,d,x; cin >> r >> d >> x;
    int i = 0;
    while (i < 10) {
        x = r * x - d;
        cout << x << endl;
        i++;
    }
}
