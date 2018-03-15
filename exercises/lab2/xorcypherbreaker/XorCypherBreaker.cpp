//
// Created by suchy1713 on 15.03.18.
//

#include "XorCypherBreaker.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

std::string XorCypherBreaker(const std::vector<char> &cryptogram,
                             int key_length,
                             const std::vector<std::string> &dictionary
                             )
{
    std::string crypt = std::string(cryptogram.begin(), cryptogram.end());
    std::string ret;

    //std::cout << crypt;

    for(int i = 97; i < 123; i++)
    {
        for(int j = 97; j < 123; j++)
        {
            for(int k = 97; k < 123; k++) {
                crypt = std::string(cryptogram.begin(), cryptogram.end());
                //std::cout << crypt << std::endl;

                for (int l = 0; l < crypt.length(); l++) {

                    if (l % 3 == 0) {
                        crypt[l] = char(int(crypt[l]) ^ i);
                    }

                    if (l % 3 == 1) {
                        crypt[l] = char(int(crypt[l]) ^ j);
                    }

                    if (l % 3 == 2) {
                        crypt[l] = char(int(crypt[l]) ^ k);
                    }
                }
                //std::cout << crypt << std::endl;

                if (find(dictionary.begin(),dictionary.end(), crypt) != dictionary.end())
                {
                    ret[0] = char(i);
                    ret[1] = char(j);
                    ret[2] = char(k);
                    return ret;
                }
            }

            }
        }
    }