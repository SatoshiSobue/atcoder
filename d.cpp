#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
#include <map> 
#include <iostream>
#include <string>
#include <typeinfo>

#include <algorithm>
#include <sstream>
using namespace std;


long long one(long long bina){
    long long ans = 0;
    long long count = 0;
    for (long long i = 0; bina>0 ; i++)
    {
        ans = ans+(bina%2)*pow(10,i);
        if (bina%2 == 1) count++;
        bina = bina/2;
    }
    return count;
}
long long binary(string binary) {
  /* 変数の宣言 */reverse(binary.begin(), binary.end());
  long long decimal = 0;
 
  /* 2進数を10進数に変換 */
  int i = 0;
  while(i < sizeof(binary) - 1){
    if (binary[i] == '1') {
        decimal += pow(2,i);
    }
    i++;
  }
 
  return decimal;
}


int main(void) {
    long long N; string X; cin >> N >> X;
    long long i = 0;
    while (i < N) {
        string tmpX = X;
        long long ans = 0;
        if (tmpX[i] == '1') {
            tmpX[i] = '0';
        }  else {
            tmpX[i] = '1';
        }
        long long tmp = stoll(tmpX,0,2);
        while (tmp != 0) {
            tmp = tmp % one(tmp);
            ans++;
        }
        cout << ans << endl;
        i++;
    }
}
