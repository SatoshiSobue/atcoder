#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
#include <map>
using namespace std;
int main(void){
    int n; cin >> n;
    map<int, int> o;
    map<int, int> e;
    int i = 1;
    while(i <= n){
        int tmp = 0;
        cin >> tmp;
        if (i % 2 == 1) {
            if (o.count(tmp)) o[tmp] += 1;
            else o[tmp] = 1;
        } else {
            if (e.count(tmp)) e[tmp] += 1;
            else e[tmp] = 1;

        }
        i++;
    }
    int emax = 0;
    int emaxV = 0;
    for (auto itr = e.begin(); itr != e.end(); itr++) {
        if (emax < itr->second){
            emax = itr->second; 
            emaxV = itr->first;
        } 
    }
    int omax = 0;
    int omaxV = 0;
    for (auto itr = o.begin(); itr != o.end(); itr++) {
        if (omax < itr->second) {
            omax = itr->second;
            omaxV = itr->first;
        } 
    }
    if (omaxV != emaxV) cout << n - emax - omax << endl;
    else {
        if (emax > omax) {
            int omax2 = 0;
            int omaxV2 = 0;
            for (auto itr = o.begin(); itr != o.end(); itr++) {
                if (itr->first == omaxV) continue;
                if (omax2 < itr->second) omax2 = itr->second; omaxV2 = itr->first;
            }
            cout << n - emax - omax2 << endl;
        } else {
            int emax2 = 0;
            int emaxV2 = 0;
            for (auto itr = e.begin(); itr != e.end(); itr++) {
                if (itr->first == emaxV) continue;
                if (emax2 < itr->second) emax2 = itr->second; emaxV2 = itr->first;
            }
            cout << n - emax2 - omax << endl;

        }
    }
}
