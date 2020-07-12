#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
#include <algorithm>
#include <map>
using namespace std;
int main(void){
    long long N, M; cin >> N >> M;
    long long i = 0;
    vector<long long> a(N);
    vector<long long> b(N);
    map<long long, long long> m;
    while(N > i){
        long long tmp1;
        long long tmp2;
        cin >> tmp1 >> tmp2;
        m[tmp1] = tmp2;
        i++;
    }
    long long count = 0;
    long long count2 = 0;
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        while(itr->second > 0) {
            itr->second--;
            count+=itr->first;
            count2++; 
            if (count2 == M) break;
        }
        if (count2 == M) break;
    }
    cout << count << endl;
}
