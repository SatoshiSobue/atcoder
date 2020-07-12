#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
using namespace std;
int main(void) {
    int N; cin >> N;
    int i = 1;
    int ans = 0;
    while(i <= N) {
        int tmp;
        cin >> tmp;
        if (tmp % 2 == 1 && i % 2 == 1) ans++;
        i++;
    }
    cout << ans << endl;
}
