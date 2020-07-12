#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
using namespace std;
int main(void) {
    int L,R,d; cin >> L >> R >> d;
    int i = L;
    int ans = 0;
    while(i <= R) {
        if (i % d == 0) ans++;
        i++;
    }
    cout << ans << endl;
}
