#include <iostream>
#include <stdio.h>
#include <vector> 
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

int main(void){
    int N; cin >> N;
    vector<int> a(N*2);
    int i=0;

    while(N > i){
        long long tmp = 0;
        cin >> tmp;
        a.push_back(tmp);
        a.push_back(tmp);
        i++;
    }
    sort(a.begin(), a.end(), greater<int>());
    int count = 0;
    long long sum = 0;
    a[0] = 0;
    while (N > count) {
        sum += a[count];
        count++;
    }
    cout << sum << endl;
}


