//
// Created by dwojt on 05.03.2018.
//

#include "DoubleBasePalindromes.h"
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

bool IsDoublePalindrome(int val)
{
    //sprawdza czy to palindrom ten fajny, działa
    string str="";
    int pom = val;
    string strdec = to_string(val);
    while (val!=0)
    {
        str += char(val%2+48);
        val=val/2;
    }
    int a=str.size(), b=strdec.size();
    for (int i=0; i<a/2; i++)
    {
        if (str[i]!=str[a-i-1])
        {
            return false;
        }
    }
    for (int i=0; i<b/2+1; i++)
    {
        if (strdec[i]!=strdec[b-i-1])
        {
            return false;
        }

    }
    return true;
}
