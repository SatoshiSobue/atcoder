#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
using namespace std;
int main(void){
    string S; cin >> S;
    if (S.substr(0,1) != "A") {
        cout << "WA" << endl;
        return 1;
    } 
    string Ssub = S.substr(2, S.size() - 3);
    int index = Ssub.find("C");
    if (index == -1) {
        cout << "WA" << endl;
        return 1;
    }
    int index2 = Ssub.erase(index, 1).find("C");
    if (index2 != -1) {
        cout << "WA" << endl;
        return 1;
    }
    int i = 0;
    int count = 0;
    while(i < S.size()) {
        if (isupper(S[i])) {
            count += 1;
        }
        i++;
    }
    if (count != 2) {
        cout << "WA" << endl;
        return 1;
    }
    cout << "AC" << endl;
    return 0;
}
