#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
#include <algorithm> 
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)

int main() { 
    int H, W; cin >> H >> W;
    vector<vector<string>> table(H, vector<string>(W));
    rep(i, H) {
        rep(j, W) {
            cin >> table.at(i).at(j);
        }
    }
    vector<bool> line(H, false);
    vector<bool> quene(W, false);

    rep(i, H) {
        rep(j, W) {
            if (table.at(i).at(j) == "#") {
                line.at(i) = true;
                quene.at(j) = true;
            }
        }
    }

    rep(i, H) {
        if (line.at(i)){
        rep(j, W) {
            if (quene.at(j)) {
            cout << table.at(i).at(j);
            }
        }
        cout << endl;
        }
    }
    return 0; 
}
