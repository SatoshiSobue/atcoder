#include <iostream>
#include <stdio.h>
#include <vector> 
#include <math.h> 
using namespace std;

int main(void) {
    string s; cin >> s;
    int mmyyFlag = 1;
    int yymmFlag = 1;
    if (stoi(s.substr(0,2)) > 12 || stoi(s.substr(0,2)) == 0) mmyyFlag = 0;
    if (stoi(s.substr(0,2)) < 13 && (stoi(s.substr(2,2)) > 12 || stoi(s.substr(2,2)) == 0)) yymmFlag = 0;
    if ((s[0] == '0' && s[1] == '0' && stoi(s.substr(2,2)) > 12) || (s[2] == '0' && s[3] == '0' && stoi(s.substr(0,2)) > 12) || s=="0000") {
        mmyyFlag = 0;
        yymmFlag = 0;
    }
    if (mmyyFlag && yymmFlag) cout << "AMBIGUOUS" << endl;
    if (mmyyFlag && !yymmFlag) cout << "MMYY" << endl;
    if (!mmyyFlag && yymmFlag) cout << "YYMM" << endl;
    if (!mmyyFlag && !yymmFlag) cout << "NA" << endl;
}
