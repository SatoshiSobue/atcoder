#include <iostream>
#include <stdio.h>
#include <vector> 
#include <cmath>
#include <algorithm>
using namespace std;
int main(void){
    int N; cin >> N;
    int i = 0;
    int index = 0;
    vector<int> a(N);
    while(a.size() > i){
        cin >> a[i];
        a[i]-=(i+1);
        i++;
    }
    sort(a.begin(), a.end());
    int c = N%2
    if (c == 1) {
        int b = a[N/2];
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += abs(a[i] - (b));
        }
    }
    }
