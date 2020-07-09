#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
#include <algorithm> 
using namespace std;
int main(void){
    int N; cin >> N;
    int i = 0;
    vector<int> x(N);
    while(N > i){
        cin >> x[i];
        i++;
    }
    sort(x.begin(), x.end());
    i = 1;
    int min = x[0];
    while (N > i) {
        x[i] = x[i] % min;
        if (x[i] < min && x[i] > 0) {
            min = x[i];
            sort(x.begin(), x.end());
        }
        if (min == 1) break;
        i++;
    }
    cout << min << endl;
}
