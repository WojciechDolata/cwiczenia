//
// Created by dolawojc on 3/11/18.
//

#include "Polybius.h"
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

int tab[2][26] = {{1,1,1,1,1,2,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5},{1,2,3,4,5,1,2,3,4,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5}};

string PolybiusCrypt(string message) {
    string crypted = "";
    for(int i=0; i<message.size(); i++) {
        int num = int(message[i]);
        if(num >= 65 and num <= 90) {
            num += 32;
        }
        else if(num < 97 or num > 122) {
            return 0;
        }
        if (num != 32) {
            crypted = crypted + char( tab[0][num-97]+48) + char( tab[1][num-97]+48);
        }
    }

    return crypted;
}

string PolybiusDecrypt(string crypted) {


}