#include <iostream>
#include <stdio.h>
using namespace std;
int main(void){
    int N; cin >> N;
    int tmp = N;
    int sum = 0;
    while (tmp >= 1) {
        sum += tmp % 10;
        tmp /= 10;
    }
    N % sum == 0 ? cout << "Yes" << endl : cout << "No" << endl;

}
