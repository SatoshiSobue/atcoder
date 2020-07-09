#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
using namespace std;
int main(void){
    int h, w, k; cin >> h >> w >> k;
    vector<vector<char> > m(h, vector<char>(w));
    vector<vector<char> > p(h, vector<char>(w));
    int i = 0; int j = 0; 
    int ans = 0;
    while (h > i) {
        j = 0;
        while (w > j) {
            cin >> m.at(i).at(j);
            j++;
        }
        i++;
    }
    for (int bit = 0; bit < (1<<h); ++bit) {
        for (int bit2 = 0; bit2 < (1<<w); ++bit2) {
            p = m;
            for (int i = 0; i < h; ++i) {
                if (bit & (1<<i)) { // 列挙に i が含まれるか
                    int c = 0;
                    while(c < w) {
                        p.at(i).at(c) = 'a';
                        c++;
                    }
                }
            }
            for (int i = 0; i < w; ++i) {
                if (bit2 & (1<<i)) { // 列挙に i が含まれるか
                    int c = 0;
                    while(c < h) {
                        p.at(c).at(i) = 'a';
                        c++;
                    }
                }
            }
            int count = 0;
            i = 0;
            while (h > i) {
                j = 0;
                while (w > j) {
                    if (p.at(i).at(j) == '#') count++;
                    j++;
                }
                i++;
            }
            if (count == k) ans++;
        }
    }
    cout << ans << endl;
}
