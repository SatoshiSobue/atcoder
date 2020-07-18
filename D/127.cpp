#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
using namespace std;
int main(void){
    long long N, K; cin >> N >> K;
    int i = 0;
    int sum = 0;
    while(i < N)  {
        int tmp;
        cin >> tmp;
        sum += tmp;
        i++;
    }
    i = 0;
    while(i < K)  {
        int tmp;
        cin >> tmp;
        sum += tmp;
        i++;
    }
    int ans = sum % 2 == 1 ? N * K - 1: N * K;
    cout << ans << endl;
}
