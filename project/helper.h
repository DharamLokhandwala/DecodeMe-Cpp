#ifndef HELPER_H

#define HELPER_H

#include<iostream>
#include<conio.h>
#include<windows.h>
#include<mmsystem.h>
#include "encrypt.h"
#include<stdlib.h>
#include<fstream>
void printWelcome()
{
    string welcome= "Welcome To DECODE ME";
    int i;
    while(welcome[i]!='\0')
    {

        PlaySound(TEXT("Untitled1.wav"),NULL,SND_SYNC);
        cout<< welcome[i];
        Sleep(5);
        i++;
    }

}
#endif // HELPER_H
