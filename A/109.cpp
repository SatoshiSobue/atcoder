#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
using namespace std;

int main(void) {
    int n,X; cin >> n >> X;
    vector<int> x(n);
    int i = 0;
    int min = 10e9;
    while (i < n) {
        int tmp;
        cin  >> tmp;
        x[i] = abs(tmp - X);
        if (x[i] < min) min = x[i];
        i++;
    }
    i = 0;
    int D = 0;
    bool flag = true;
    while (i < min) {
        while (j < n) {
            if (x[j] % i != 0) {
                flag = false;
                break;
            } 
            j++;
        }
        if (flag) D = i;
        i++;
    }
    cout << D << endl;
}
