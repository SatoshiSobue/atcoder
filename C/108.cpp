#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
using namespace std;
int main(void){
    long long N, K; cin >> N >> K;
    if ( K % 2 == 1) {
        long a = N/K;
        cout << pow(a, 3) << endl;
    } else {
        long long a = N/K;
        long long b = (N+(K/2)) / K;
        cout << pow(a, 3) + pow(b,3) << endl;
    }
}
