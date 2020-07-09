#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
#include <map>
using namespace std;

int main(void) {
    int N; cin >> N;
    int ans = 0;
    if (1000 - N % 1000 == 1000) {
        ans = 0;
    } else {
        ans = 1000 - N % 1000;
    }
    cout << ans << endl;
}
