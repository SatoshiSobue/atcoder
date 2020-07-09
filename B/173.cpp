#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
#include <map> 
using namespace std;
int main(void){
    int N; cin >> N;
    map<string,int> m;
    int i = 0;
    while (N > i) {
        string tmp;
        cin >> tmp;
        if (m.count(tmp)) {
            m[tmp] += 1;
        } else {
            m[tmp] = 1;
        }
        i++;
    }
    cout << "AC x " << m["AC"] << endl;
    cout << "WA x " << m["WA"] << endl;
    cout << "TLE x " << m["TLE"] << endl;
    cout << "RE x " << m["RE"] << endl;
}
