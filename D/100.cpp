#include <iostream>
#include <stdio.h>
#include <vector> 
#include <cmath>
#include <algorithm>
using namespace std;

int sum(vector<int> array) {
    int count = 0;
    for (int j = 0; j < array.size(); j++) {
        while(array[j] % 2 == 0) {
            array[j] /= 2;
            count++;
        }
    }
    return count;
}

int main(void){
    int N,M; cin >> N; cin >> M;
    int i=0;
    vector<int> a(N);
    vector<int> b(N);
    vector<int> c(N);

    while(N > i){
        cin >> a[i];
        cin >> b[i];
        cin >> c[i];
        i++;
    }
    std::max(sum(a, b, c), sum(a,b,c)
    cout << to_string(countOdd(a)) << endl;
}


