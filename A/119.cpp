#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
using namespace std;

int main(void) {
    string s; cin >> s;
    cout << s[6] << endl;
    if ((s[6] == '1' && s[5] == '0') || (s[6] == '2' && s[5] == '0') || s[6] == '3' || s[6] == '4') {
        cout << "Heisei" << endl;
    } else {
        cout << "TBD" << endl;
    }
}
