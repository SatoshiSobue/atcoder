#include <iostream>
#include <vector> 
#include <stdio.h> 
#include <math.h> 
using namespace std;

int main(void) {
    int R; cin >> R;
    if (R < 1200) {
        cout << "ABC" << endl;
    } else if (R < 2800) {
        cout << "ARC" << endl;
    } else {
        cout << "AGC" << endl;
    }
}
