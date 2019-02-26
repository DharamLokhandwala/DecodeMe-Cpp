#ifndef CIPHER_H

#define CIPHER_H
#include<iostream>
#include<map>
#include<cstring>
#include<ctype.h>
using namespace std;
void substitution()
{
    map<char,string> SubCipher;

    SubCipher['a'] = '1';
    SubCipher['b'] = '2';
    SubCipher['c'] = '3';
    SubCipher['d'] = '4';
    SubCipher['e'] = '5';
    SubCipher['f'] = '6';
    SubCipher['g'] = '7';
    SubCipher['h'] = '8';
    SubCipher['i'] = '9';
    SubCipher['j'] = "10";
    SubCipher['k'] = "11";
    SubCipher['l'] = "12";
    SubCipher['m'] = "13";
    SubCipher['n'] = "14";
    SubCipher['o'] = "15";
    SubCipher['p'] = "16";
    SubCipher['q'] = "17";
    SubCipher['r'] = "18";
    SubCipher['s'] = "19";
    SubCipher['t'] = "20";
    SubCipher['u'] = "21";
    SubCipher['v'] = "22";
    SubCipher['w'] = "23";
    SubCipher['x'] = "24";
    SubCipher['y'] = "25";
    SubCipher['z'] = "26";
    SubCipher[' '] = ' ';


   // cout<<SubCipher.at('a')<<endl;
    string ch="you are a detective your next clue is i am caesars creation";
    //SubCipher.at(ch[0]);
    int l;
    l=strlen(ch.c_str());

    for(int i=0;i<l;)
    {
        if(ch[i] == ' ')
        {
            cout<< "/";
        }

        cout<<SubCipher.at(ch[i])<<" ";

        i++;
    }

}
// ------------------------------------------------- End of substitution cipher--------------------------------------------

// --------------------------------------------Morse Code starts here -------------------------------
void MorseCode()
{
    map<char,string> MorseCode;

    MorseCode['a'] = ".-";
    MorseCode['b'] = "-...";
    MorseCode['c'] = "-.-.";
    MorseCode['d'] = "-..";
    MorseCode['e'] = ".";
    MorseCode['f'] = "..-.";
    MorseCode['g'] = "--.";
    MorseCode['h'] = "....";
    MorseCode['i'] = "..";
    MorseCode['j'] = ".---";
    MorseCode['k'] = "-.-";
    MorseCode['l'] = ".-..";
    MorseCode['m'] = "--";
    MorseCode['n'] = "-.";
    MorseCode['o'] = "---";
    MorseCode['p'] = ".--.";
    MorseCode['q'] = "--.-";
    MorseCode['r'] = ".-.";
    MorseCode['s'] = "...";
    MorseCode['t'] = "-";
    MorseCode['u'] = "..-";
    MorseCode['v'] = "...-";
    MorseCode['w'] = ".--";
    MorseCode['x'] = "-..-";
    MorseCode['y'] = "-.--";
    MorseCode['z'] = "--..";
    MorseCode[' '] = ' ';
    MorseCode['1'] = ".----";
    MorseCode['2'] = "..---";
    MorseCode['3'] = "...--";
    MorseCode['4'] = "....-";
    MorseCode['5'] = ".....";
    MorseCode['6'] = "-....";
    MorseCode['7'] = "--...";
    MorseCode['8'] = "---..";
    MorseCode['9'] = "----.";
    MorseCode['0'] = "-----";


   // cout<<MorseCode.at('a')<<endl;
    string ch1="dy7097 lax";
    //MorseCode.at(ch[0]);
    int l;
    l=strlen(ch1.c_str());

    for(int i=0;i<l;)
    {

        cout<<MorseCode.at(ch1[i])<<" ";

        i++;
    }

}
#endif // CIPHER_H

