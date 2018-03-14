//
// Created by dolawojc on 3/11/18.
//

#include <iostream>
#include "Polybius.h"
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string test;
    getline(cin, test);
    cout << PolybiusCrypt(test) << endl;
    cout << PolybiusDecrypt(PolybiusCrypt(test)) << endl;
    return 0;
}