#include<iostream>
#include<conio.h>
#include<windows.h>
#include<mmsystem.h>
#include "encrypt.h"
#include<stdlib.h>
#include<fstream>
#include "Cipher.h"
using namespace std;
int main()
{
    string user;
    string welcome= "Welcome To DECODE ME";
    int i=0;
    ifstream fin;
    ofstream fout;
    //string user;
    int cnt=0,level=0;

    system("cls");
    cout<<endl;cout<<endl;cout<<endl<<"\t\t\t\t";
    while(welcome[i]!='\0')
    {

        PlaySound(TEXT("Untitled1.wav"),NULL,SND_SYNC);
        cout<< welcome[i];
        Sleep(5);
        i++;
    }
    cout<<endl<<"\t\t\t\tPlease enter all letters in lowercase only"<<endl;
    i=0; cout<<endl;
    system("pause");
    system("cls");
    cout<<endl;cout<<endl;cout<<endl<<"\t\t\t\t";
    string naration1 = "He Woke up and saw himself in an empty apartment.He was alone.He didn't remember who he was or where he was!He felt like the worst Hangover of his life,He was hassling.Suddenly a pager beeped and he got a message on an unknown mobile,which was lying in the living room of the empty apartment";
    PlaySound("naration1.wav",NULL,SND_ASYNC);

    while(naration1[i]!='\0')
    {
        //PlaySound("Untitled1.wav",NULL,SND_ASYNC);
        if(naration1[i] == '.' || naration1[i] == '!' || naration1[i] == ',')
        {
            cout<<naration1[i]<<endl<<"\t\t\t\t";
            i++;
        }
        cout<< naration1[i];
        Sleep(80);
        i++;
    }
    cout<<endl;
    system("pause");
    system("cls");
   encode1 level1;  encode2 level2; encode3 level3; encode4 level4; encode5 level5;
   fflush(stdin);
   level1.PrintCode() ;
   fflush(stdin);
   level1.GetCode();

    i=0;
    PlaySound("naration1.wav",NULL,SND_ASYNC);
    /* ---------------- level 1 completion is down------------------ */

   if(level1.flag==1)
   {
       level = 2;
       string naration2 = "After few minutes, phone beeps and another message is received..";
       system("cls");
       cout<<endl;cout<<endl;cout<<endl<<"\t\t\t\t";
       while(naration2[i]!='\0')
        {
            cout<< naration2[i];
            Sleep(95);
            i++;
        }
        cout<<endl;
       system("pause");
       system("cls");

        level2.PrintCode();
        level2.GetCode();
   }


    i=0;
    PlaySound("naration1.wav",NULL,SND_ASYNC);
   if(level2.flag==2)
   {
        level = 3;
       system("cls");
       cout<<endl;cout<<endl;cout<<endl<<"\t\t\t\t";
       fflush(stdin);
       string naration3 = "He saw tattoo on his hand and 1961 was written on it. But in which city he was in??";
       //cout<<naration3;
       while(naration3[i]!='\0')
        {
            cout<< naration3[i];
            Sleep(100);
            i++;
        }
        cout<<endl;
       system("pause");
       system("cls");

        level3.PrintCode();
        level3.GetCode();
   }
i=0;PlaySound("naration1.wav",NULL,SND_ASYNC);
   if(level3.flag==3)
   {
        level = 4;
       system("cls");
       cout<<endl;cout<<endl;cout<<endl<<"\t\t\t\t";
       string naration4 = "He Reaches Los Angeles!!";
       //cout<<naration3;
       while(naration4[i]!='\0')
        {
            cout<< naration4[i];
            Sleep(100);
            i++;
        }
        cout<<endl;
       system("pause");
       system("cls");

        level4.PrintCode();
        level4.GetCode();
   }

   i=0;PlaySound("naration1.wav",NULL,SND_ASYNC);
   if(level4.flag==4)
   {
        level = 5;
       system("cls");
       cout<<endl;cout<<endl;cout<<endl<<"\t\t\t\t";
       string naration5 = "He sneaks into the apartment and looks around. ";

       while(naration5[i]!='\0')
        {
            cout<< naration5[i];
            Sleep(100);
            i++;
        }
        cout<<endl;
       system("pause");
       system("cls");

        level5.PrintCode();
        level5.GetCode();
   }

   i=0;PlaySound("naration1.wav",NULL,SND_ASYNC);
   if(level5.flag==5)
   {

       system("cls");
       cout<<endl;cout<<endl;cout<<endl<<"\t\t\t\t";
       string naration6 = "He goes inside the room and finds photos of himself with some girl and a kid!!";
       string naration7 = "To be continued...";
       //cout<<naration3;
       while(naration6[i]!='\0')
        {
            cout<< naration6[i];
            Sleep(100);
            i++;
        }
        cout<<endl;
       system("pause");
       system("cls");
       i=0;
       cout<<endl;cout<<endl;cout<<endl<<"\t\t\t\t";
       while(naration7[i]!='\0')
        {
            cout<< naration7[i];
            Sleep(110);
            i++;
        }
        cout<<endl;

        //level5.PrintCode();
        //level5.GetCode();
   }

return 0;
}
