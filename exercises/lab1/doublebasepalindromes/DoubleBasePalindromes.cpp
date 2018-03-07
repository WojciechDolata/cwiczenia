//
// Created by dwojt on 05.03.2018.
//

#include "DoubleBasePalindromes.h"
#include <iostream>
#include <cstdint>
#include <cstdio>
#include <string>

using namespace std;

bool is_palindrome(string str)
{
    int a = str.size();
    for (int i=0; i<a/2; i++)
    {
        if (str[i]!=str[a-i-1])
            return false;
    }
    return true;
}

uint64_t DoubleBasePalindromes(int max_vaule_exculsive)
{
    uint64_t sum = 0;
    char decimal[100];
    char binary[100];

    for(int i = 1; i <= max_vaule_exculsive; i++)
    {
        itoa(i, decimal, 10);
        itoa(i, binary, 2);

        if(is_palindrome(string(decimal)) && is_palindrome(string(binary)))
            sum += i;
    }
    return sum;
}

/*bool IsDoublePalindrome(int val)
{
    //sprawdza czy to palindrom ten fajny, działa
    string str="";
    int pom = val;
    string strdec = string.to_string(val);
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
}*/
