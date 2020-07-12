#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
#include <map> 
using namespace std;
int main(void) {
    int N; cin >> N;
    int i = 1, j= 1, z = 1;
    map<int, int> m;
    while (i <= 10000) {
        m[i] = 0;
        i++;
    }
    i = 1;
    while(i <= 100) {
        j = 1;
        while(j <= 100) {
            z = 1;
            while(z <= 100) {
                int tmp =  i*i + j*j + z*z + i*j + j*z + z*i;
                if (m.count(tmp)) m[tmp]++;
                else  m[tmp] = 1;
                z++;
            }
            j++;
        } 
        i++;
    }
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        if (itr-> first <= N) cout << itr->second << endl;
    }
}
