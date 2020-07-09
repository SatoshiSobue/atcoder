#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
using namespace std;
int main(void){
    int N, M; cin >> N >> M;
    int i = 0;
    vector<int> x(M);
    vector<int> d(M-1);
    while(M > i){
        cin >> x[i];
        i++;
    }
    sort(x.begin(), x.end());
    i = 0;
    while (M > i) {
        if (i > 0) {
            d[i] = abs(x[i] - x[i-1]);
        }
        cout << d[i] << endl;
        i++;
    }
    sort(d.begin(), d.end());
    int ans = 0;
    for (int count = 0; count < M - N + 1; count++) {
        ans += d[count];
        count++;
    }
    cout << ans << endl;
}
