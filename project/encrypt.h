#ifndef ENCRYPT_H
#define ENCRYPT_H
#include<string.h>
#include<stdio.h>
#include<cctype>
#include "Cipher.h"
#include<iostream>

using namespace std;
class encode2;
class encode1
{

public:
    int flag;
    string decode1 = "you are a detective your next clue is i am caesars creation";
    char Getmsg1[100];
    void PrintCode()
    {
        std::cout<< "\n\t\t\t\t25 15 21 / 1 18 5 / 1 / 4 5 20 5 3 20 9 22 5 / 25 15 21 18 / 14 5 24 20 / \n\t\t\t\t3 12 21 5 / 9 19 / 9 / 1 13 / 3 1 5 19 1 18 19 / 3 18 5 1 20 9 15 14"<<std::endl;
        cout<< "\n\t\t\t\tb=2  m=13";
        substitution();
    }
    void GetCode()
    {
        std::cout<< "\n\n\t\t\tEnter the decoded message -->"<<std::endl;
            gets(Getmsg1);
            ValidateCode();
    }
    void ValidateCode()
    {

            if(strcmp(decode1.c_str(),Getmsg1)== 0)
            {
                flag=1;

            }
            else
            {
                cout<< "\n\t\t\t\tPlease enter correct code!"<<endl;
                PrintCode();
                GetCode();
            }

    }

};

class encode2 : public encode1
{
    public:
        int flag;
    char decode2[100] = "your name is john dawes. look at the tattoo on your hand and remember it. take flight.";
    char Getmsg2[100];
    void PrintCode()
    {
        std::cout<< "\nbrxu qdph lv mrkq gdzhv. orrn dw wkh wdwwrr rq \nbrxu kdqg dqg uhphpehu lw. wdnh ioljkw."<<std::endl;

    }
    void GetCode()
    {
        std::cout<< "\n\n\t\t\t\t\tEnter the decoded message -->"<<std::endl;
            gets(Getmsg2);
            ValidateCode();
    }
    void ValidateCode()
    {


            if(strcmp(decode2,Getmsg2)== 0)
            {
                flag = 2;
            }
            else
            {
                cout<< "\n\t\t\t\tPlease enter correct code!";
                PrintCode();
                GetCode();
            }

    }
};
class encode3 : public encode2
{
    public:
        int flag;
    char decode3[80] = "paris";
    char Getmsg3[80];
    void PrintCode()
    {
        std::cout<< "\n32D 32A 32C 32B 1B 32E 1A 32F 1B"<<std::endl;
        //std::cout<< "\n\t\t\t\t-.. -.-- --... ----- ----. --... / .-.. .- -..-"<<std::endl;
        MorseCode();

    }
    void GetCode()
    {
        std::cout<< "\n\n\t\t\t\t\tEnter the decoded message -->"<<std::endl;
            gets(Getmsg3);
            ValidateCode();
    }
    void ValidateCode()
    {


            if(strcmp(decode3,Getmsg3)== 0)
            {
                flag=3;
            }
            else
            {
                cout<< "\n\t\t\t\tPlease enter correct code!";
                PrintCode();
                GetCode();
            }

    }
};
class encode4 : public encode3
{
    public:
        int flag;
    char decode4[80] = "ballington plaza apartment";
    char Getmsg4[80];
    void PrintCode()
    {
        std::cout<< "\n\t\t\t\tMzQuMDQyNTYxNDk5OTk5OTksLTExOC4yNDc2NiBnbyB0byByb29tLg=="<<std::endl;
        std::cout<< "\n\t\t\t\tMy Base has 64 shelves!"<<std::endl;

    }
    void GetCode()
    {
        std::cout<< "\n\n\t\t\t\t\tEnter the decoded message -->"<<std::endl;
            gets(Getmsg4);
            ValidateCode();
    }
    void ValidateCode()
    {


            if(strcmp(decode4,Getmsg4)== 0)
            {
                flag=4;
            }
            else
            {
                cout<< "\n\t\t\t\tPlease enter correct code!";
                PrintCode();
                GetCode();
            }

    }
};

class encode5 : public encode4
{
    public:
        int flag;
    char decode5[80] = "1961";
    char Getmsg5[80];
    void PrintCode()
    {
        std::cout<< "\n\t\t\t\tYour room has Strobogrammatic number!"<<std::endl;
    }
    void GetCode()
    {
        std::cout<< "\n\n\t\t\t\t\tEnter the decoded message -->"<<std::endl;
            gets(Getmsg5);
            ValidateCode();
    }
    void ValidateCode()
    {


            if(strcmp(decode5,Getmsg5)== 0)
            {
                flag=5;
            }
            else
            {
                cout<< "\n\t\t\t\tPlease enter correct code!";
                PrintCode();
                GetCode();
            }

    }
};
#endif // ENCRYPT_H
