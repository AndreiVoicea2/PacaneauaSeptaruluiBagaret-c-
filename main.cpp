#include <iostream>
#include<time.h>
#include <fstream>
#include <conio.h>
#include<windows.h>
#include <stdio.h>
#include <winuser.h>
#include <mmsystem.h>
#include <unistd.h>


/*
The different color codes are

0   BLACK
1   BLUE
2   GREEN
3   CYAN
4   RED
5   MAGENTA
6   BROWN
7   LIGHTGRAY
8   DARKGRAY
9   LIGHTBLUE
10  LIGHTGREEN
11  LIGHTCYAN
12  LIGHTRED
13  LIGHTMAGENTA
14  YELLOW
15  WHITE



 _________
|         |
|1 2 3 4 5|
|1 2 3 4 5|  0
|1 2 3 4 5|  |
|_________|__|
| -     - |
|---------|
|_________|


*/


using namespace std;
ifstream fin("septar.in");

int IstoricCarti[10],MarimeVector;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
int pretinitial,balanta;
int  a[10][10],castig;
char keypressed;
int nr;

struct emblema
{

    int indice;
    int sansa;
    int valoare;


}cireasa,pruna,portocala,lamaie,strugure,septar,pepene;

void InitializareIndici()
{
     cireasa.indice=1;
    pruna.indice=2;
    portocala.indice=3;
    lamaie.indice=4;
    strugure.indice=5;
    pepene.indice=6;
    septar.indice=7;

}

void InitializareSanse()
{
     pruna.sansa=cireasa.sansa;
     portocala.sansa=cireasa.sansa;
     lamaie.sansa=cireasa.sansa;
     strugure.sansa=cireasa.sansa;
     pepene.sansa=cireasa.sansa;
}

void CreareMatrice()
{
    srand(time(0));
    float procent=rand() % 100;
    int contor=0;





    while(contor !=10)
    {

    cout<<" _________"<<endl;
   cout<<"|         |"<<endl;

    for(int i=1; i<=3; i++)
    {
          cout<<"|";
         for(int j=1; j<=5; j++)
         {

            procent=rand() % 100;
            if(procent<=septar.sansa && j!=5)cout<<7<<" ";
            else if(procent<=septar.sansa && j==5)cout<<7;
            else if(j!=5) cout<<(rand() % 6) + 1<<" ";
            else cout<<(rand() % 6) + 1;

         }

          cout<<"|"<<endl;






    }
    cout<<"|_________|__"<<endl;
         cout<<"| -     - |  |"<<endl;
         cout<<"|---------|  |"<<endl;
         cout<<"|_________|  0"<<endl;



    contor++;
     Sleep(180);
     system("cls");
    }


}

void ButoaneDublajInterfata()
{

     SetConsoleTextAttribute(h,14 );
cout<<"< sau > pentru a selecta cartea"<<endl;
cout<<"/ pentru a pastra castigul"<<endl;
cout<<"dupa selectie apasa enter"<<endl;

 SetConsoleTextAttribute(h,15);
cout<<endl;




cout<<"@@@@@@@@@@@@@@@@@@@@                            ";
cout<<"@@@@@@@@@@";
SetConsoleTextAttribute(h,8);
cout<<"&";
SetConsoleTextAttribute(h,15);
cout<<"@@@@@@@@@"<<endl;






SetConsoleTextAttribute(h,15);
cout<<"@@@@";
SetConsoleTextAttribute(h,4);
cout<<"#####";
SetConsoleTextAttribute(h,15);

cout<<"@@@";
SetConsoleTextAttribute(h,4);
cout<<"#####";
SetConsoleTextAttribute(h,15);
cout<<"@@@                            @@@@@@@@";
 SetConsoleTextAttribute(h,8);
 cout<<"&&&&&";
SetConsoleTextAttribute(h,15);
cout<<"@@@@@@@"<<endl;

cout<<"@@";
SetConsoleTextAttribute(h,4);
cout<<"#################";
SetConsoleTextAttribute(h,15);
cout<<"@                            @@@@@";
SetConsoleTextAttribute(h,8);
cout<<"&&&&&&&&&&&";
SetConsoleTextAttribute(h,15);
cout<<"@@@@"<<endl;


cout<<"@@";
SetConsoleTextAttribute(h,4);
cout<<"#################";
SetConsoleTextAttribute(h,15);
cout<<"@                            @@@";
SetConsoleTextAttribute(h,8);
cout<<"&&&&&&&&&&&&&&&";
SetConsoleTextAttribute(h,15);
cout<<"@@"<<endl;



cout<<"@@";
SetConsoleTextAttribute(h,4);
cout<<"#################";
SetConsoleTextAttribute(h,15);
cout<<"@                            @";
SetConsoleTextAttribute(h,8);
cout<<"&&&&&&&&&&&&&&&&&&";
SetConsoleTextAttribute(h,15);
cout<<"@"<<endl;



cout<<"@@@@";
SetConsoleTextAttribute(h,4);
cout<<"#############";
SetConsoleTextAttribute(h,15);
cout<<"@@@                            @";
SetConsoleTextAttribute(h,8);
cout<<"&&&&&&&&&&&&&&&&&&";
SetConsoleTextAttribute(h,15);
cout<<"@"<<endl;



cout<<"@@@@@@@";
SetConsoleTextAttribute(h,4);
cout<<"#######";
SetConsoleTextAttribute(h,15);
cout<<"@@@@@@                            @@";
SetConsoleTextAttribute(h,8);
cout<<"&&&&&&&&&&&&&&&&";
SetConsoleTextAttribute(h,15);
cout<<"@@"<<endl;



cout<<"@@@@@@@@@@";
SetConsoleTextAttribute(h,4);
cout<<"#";
SetConsoleTextAttribute(h,15);
cout<<"@@@@@@@@@                            @@@@@@@@@";
SetConsoleTextAttribute(h,8);
cout<<"&&&";
SetConsoleTextAttribute(h,15);
cout<<"@@@@@@@@"<<endl;


cout<<endl;

}

void dublaj(int &SumaDublaj){


int IndiceCarte=0;
int IndiceAleator=0;
keypressed=' ';

system("cls");

while(SumaDublaj!=0 && keypressed!='/')
      {


          ButoaneDublajInterfata();
          IndiceAleator=0;
          cout<<endl;

          cout<<"Cartile anterioare: ";

          if(MarimeVector!=0)
          {
              for(int i=0; i<=MarimeVector-1; i++)
            if(IstoricCarti[i]==1)cout<<"r ";
             else if(IstoricCarti[i]==2)cout<<"n ";
              cout<<endl;
          }
          cout<<endl;

          start:

          cin>>keypressed;
          cout<<endl;

          if(keypressed=='<')
          {
          IndiceAleator = (rand()%2)+1;
          IndiceCarte=1;

          }
          else if(keypressed=='>')
          {
              IndiceAleator = (rand()%2)+1;
              IndiceCarte=2;

           }else if(keypressed != '/') goto start;

        if(IndiceCarte==IndiceAleator && IndiceAleator!=0)
        {
            SumaDublaj*=2;
            cout<<"Ai Dublat! (Castigul este de "<<SumaDublaj<<" )"<<endl;
            cout<<endl;
        }else if(keypressed != '/')
        {
            SumaDublaj=0;
            cout<<"Ai pierdut!"<<endl;
        }

          if(MarimeVector==5)
          {
              for(int i=0; i<=MarimeVector-1; i++)
               IstoricCarti[i]=IstoricCarti[i+1];
                 IstoricCarti[MarimeVector-1]=IndiceAleator;



          }
          else IstoricCarti[MarimeVector++]=IndiceAleator;

       if(keypressed != '/') system("pause");
        system("cls");

      }



}


bool CalculCastig(int NumarEmblemeIntroduse , int IndiceIntrodus)
{

     if(NumarEmblemeIntroduse>=2 && IndiceIntrodus==1)
     {
         castig+=pretinitial*NumarEmblemeIntroduse/(6-NumarEmblemeIntroduse)+cireasa.valoare;
         return true;
     }
     else if(NumarEmblemeIntroduse>=3 && IndiceIntrodus==2)
     {
         castig+=pretinitial*NumarEmblemeIntroduse/(6-NumarEmblemeIntroduse)+pruna.valoare;
         return true;
     }
     else if(NumarEmblemeIntroduse>=3 && IndiceIntrodus==3)
     {
         castig+=pretinitial*NumarEmblemeIntroduse/(6-NumarEmblemeIntroduse)+portocala.valoare;
         return true;
     }
     else if(NumarEmblemeIntroduse>=3 && IndiceIntrodus==4)
     {
         castig+=pretinitial*NumarEmblemeIntroduse/(6-NumarEmblemeIntroduse)+lamaie.valoare;
         return true;
     }
     else if(NumarEmblemeIntroduse>=3 && IndiceIntrodus==5)
     {
         castig+=pretinitial*NumarEmblemeIntroduse/(6-NumarEmblemeIntroduse)+strugure.valoare;
         return true;
     }
     else if(NumarEmblemeIntroduse>=3 && IndiceIntrodus==6)
     {
         castig+=pretinitial*NumarEmblemeIntroduse/(6-NumarEmblemeIntroduse)+pepene.valoare;
         return true;
     }
     else if(NumarEmblemeIntroduse>=3 && IndiceIntrodus==7)
     {
        castig+=pretinitial*NumarEmblemeIntroduse/(6-NumarEmblemeIntroduse)+septar.valoare;
        return true;
     }

     return false;
}


void Linia1()
{
    int indice=1;
    int numarembleme=0;
    int ok=1;



    while(indice<=7)
    {

     if(a[1][1]==indice)
     {


     numarembleme=0;
     ok=1;
    for(int j=1; j<=5 && ok==1; j++)
    {
     if(a[1][j]==indice)numarembleme++;
      else ok=0;



    }



    if(CalculCastig(numarembleme,indice)==true)
    {
           cout<<" _________"<<endl;
           cout<<"|         |"<<endl;

         for(int l=1; l<=3; l++)
         {

          cout<<"|";

           for(int k=1; k<=5; k++)
            if(k<=numarembleme && l==1)
         {
             SetConsoleTextAttribute(h,4);
             if(k!=5)
             cout<<a[l][k]<<" ";
             else cout<<a[l][k];
         }
         else {

            SetConsoleTextAttribute(h,15);
            if(k!=5)
             cout<<a[l][k]<<" ";
            else cout<<a[l][k];

         }

         SetConsoleTextAttribute(h,15);
         if(l==2)cout<<"|  0"<<endl;
         else if (l==3)cout<<"|  |"<<endl;
         else cout<<"|"<<endl;
         }

         cout<<"|_________|__|"<<endl;
         cout<<"| -     - |"<<endl;
         cout<<"|---------|"<<endl;
         cout<<"|_________|"<<endl;


         Sleep(2000);
         break;

    }

     }
      indice++;

    }



}

void Linia2()
{
    int indice=1;
    int numarembleme=0;
    int ok=1;


    while(indice<=7)
    {

     if(a[2][1]==indice)
     {


     numarembleme=0;
     ok=1;
    for(int j=1; j<=5 && ok==1; j++)
    {
     if(a[2][j]==indice)numarembleme++;
     else ok=0;



    }

     if(CalculCastig(numarembleme,indice)==true)
    {

             cout<<" _________"<<endl;
           cout<<"|         |"<<endl;

         for(int l=1; l<=3; l++)
         {
cout<<"|";

           for(int k=1; k<=5; k++)
            if(k<=numarembleme && l==2)
         {
             SetConsoleTextAttribute(h,10);
             if(k!=5)
             cout<<a[l][k]<<" ";
             else cout<<a[l][k];

         }
         else {

            SetConsoleTextAttribute(h,15);
             if(k!=5)
             cout<<a[l][k]<<" ";
             else cout<<a[l][k];

         }
         SetConsoleTextAttribute(h,15);
         if(l==2)cout<<"|  0"<<endl;
         else if (l==3)cout<<"|  |"<<endl;
         else cout<<"|"<<endl;
         }
cout<<"|_________|__|"<<endl;
         cout<<"| -     - |"<<endl;
         cout<<"|---------|"<<endl;
         cout<<"|_________|"<<endl;
         Sleep(2000);
         break;

    }


     }
      indice++;

    }


}


void Linia3()
{
    int indice=1;
    int numarembleme=0;
    int ok=1;


    while(indice<=7)
    {

     if(a[3][1]==indice)
     {


     numarembleme=0;
     ok=1;
    for(int j=1; j<=5 && ok==1; j++)
    {
     if(a[3][j]==indice)numarembleme++;
     else ok=0;



    }

     if(CalculCastig(numarembleme,indice)==true)
    {
cout<<" _________"<<endl;
           cout<<"|         |"<<endl;

         for(int l=1; l<=3; l++)
         {
cout<<"|";

           for(int k=1; k<=5; k++)
            if(k<=numarembleme && l==3)
         {
             SetConsoleTextAttribute(h,9);
             if(k!=5)
             cout<<a[l][k]<<" ";
             else cout<<a[l][k];

         }
         else {

            SetConsoleTextAttribute(h,15);
             if(k!=5)
             cout<<a[l][k]<<" ";
             else cout<<a[l][k];

         }
         SetConsoleTextAttribute(h,15);
         if(l==2)cout<<"|  0"<<endl;
         else if (l==3)cout<<"|  |"<<endl;
         else cout<<"|"<<endl;
         }
cout<<"|_________|__|"<<endl;
         cout<<"| -     - |"<<endl;
         cout<<"|---------|"<<endl;
         cout<<"|_________|"<<endl;
         Sleep(2000);
         break;

    }



     }
      indice++;

    }


}

void Linia4()
{

    int indice=1;
    int numarembleme=0;


    while(indice<=7)
    {

     if(a[1][1]==indice)
     {


     numarembleme=0;
     numarembleme++;






     if(a[2][2]==indice)
     {
         numarembleme++;
         if(a[3][3]==indice)
         {
             numarembleme++;
             if(a[2][4]==indice)
             {
                 numarembleme++;
                 if(a[1][5]==indice)numarembleme++;
             }
         }

     }




    if(CalculCastig(numarembleme,indice)==true)
    {

cout<<" _________"<<endl;
           cout<<"|         |"<<endl;


         for(int l=1; l<=3; l++)
         {
cout<<"|";

           for(int k=1; k<=5; k++)
            if(k<=numarembleme && ((l==1 && k==1) || (l==2 && k==2) || (l==3 && k==3) || (l==2 && k==4) || (l==1 && k==5)))
         {
             SetConsoleTextAttribute(h,2);
             if(k!=5)
             cout<<a[l][k]<<" ";
             else cout<<a[l][k];

         }
         else {

            SetConsoleTextAttribute(h,15);
             if(k!=5)
             cout<<a[l][k]<<" ";
             else cout<<a[l][k];

         }
         SetConsoleTextAttribute(h,15);
         if(l==2)cout<<"|  0"<<endl;
         else if (l==3)cout<<"|  |"<<endl;
         else cout<<"|"<<endl;
         }
cout<<"|_________|__|"<<endl;
         cout<<"| -     - |"<<endl;
         cout<<"|---------|"<<endl;
         cout<<"|_________|"<<endl;
         Sleep(2000);
         break;

    }


     }
      indice++;

    }



}


void CalculLinii()
{
    castig=0;
    srand(time(0));

    for(int i=1; i<=3; i++)
    {

         for(int j=1; j<=5; j++)
         {

           int procent=rand() % 100;
            if(procent<=septar.sansa)a[i][j]=7;
            else a[i][j]= (rand() % 6) + 1;

         }
    }


    Linia1();
    system("cls");
    Linia2();
    system("cls");
    Linia3();
    system("cls");
    Linia4();
    system("cls");



    cout<<" _________"<<endl;
     cout<<"|         |"<<endl;


              for(int l=1; l<=3; l++)
              {
                  cout<<"|";
               for(int k=1; k<=5; k++)
                if(k!=5)
               cout<<a[l][k]<<" ";
                else cout<<a[l][k];

               if(l==2)cout<<"|  0"<<endl;
               else if (l==3)cout<<"|  |"<<endl;
               else cout<<"|"<<endl;
              }

              cout<<"|_________|__|"<<endl;
              cout<<"| -     - |"<<endl;
              cout<<"|---------|"<<endl;
              cout<<"|_________|"<<endl;




    //linia 4: a11 a22 a33 a24 a15

    //linia 5: a31 a22 a13 a24 a35

    //linia 6: a11 a12 a23 a34 a35

    //linia 7: a31 a32 a23 a14 a15

    //linia 8: a21 a32 a33 a34 a25

    //linia 9: a21 a12 a13 a14 a25

    //linia 10: a11 a22 a33 a24 a15

    //linia 11: a31 a22 a23 a24 a35

    //linia 12: a21 a32 a23 a14 a25

    //linia 13: a21 a12 a23 a34 a25

    //linia 14: a11 a22 a13 a24 a15

    //linia 15: a31 a22 a33 a24 a35



}


void Informatie()
{


    SetConsoleTextAttribute(h,8);
    cout<<"Platile sunt acordate de la stanga la dreapta si calculeaza numarul de simboluri asemanatoare de pe fiecare din cele 4 linii de plata."<<endl;
    cout<<endl;
    cout<<"Linia 1 de plata: A B C D E"<<endl;
    cout<<"Linia 2 de plata: F G H I J"<<endl;
    cout<<"Linia 3 de plata: K L M N O"<<endl;
    cout<<"Linia 4 de plata: A G M I E"<<endl;

cout<<" _________"<<endl;
cout<<"|         |"<<endl;
cout<<"|A B C D E|"<<endl;
cout<<"|F G H I J|  0"<<endl;
cout<<"|K L M N O|  |"<<endl;
cout<<"|_________|__|"<<endl;
cout<<"| -     - |"<<endl;
cout<<"|---------|"<<endl;
cout<<"|_________|"<<endl;
 cout<<endl;



    cout<<"Simboluri si indici:                         Sanse:"<<endl;
    cout<<"1_cireasa                                    1,2,3,4,5,6 au sansa de 50% de a pica , iar 7 are sansa de 10%"<<endl;
    cout<<"2_pruna"<<endl;
    cout<<"3_portocala                                  Valoarea simbolurilor:"<<endl;
    cout<<"4_lamaie                                     cireasa - 5 ron"<<endl;
    cout<<"5_strugure                                   pruna,portocala,lamaie - 20 ron"<<endl;
    cout<<"6_pepene                                     strugure,pepene - 100 ron"<<endl;
    cout<<"7_septar                                     septar - 500 ron"<<endl;




    cout<<endl;

    SetConsoleTextAttribute(h,15);



}


void LoadingScreen(int iteratii)
{

    system("cls");

for (int m=1; m<=iteratii; m++) {

        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLOading   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoAding   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoaDing   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadIng   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadiNg   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadinG   " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.  " << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.." << std::flush;
        Sleep(100);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading..." << std::flush;
        Sleep(100);
    }

    system("cls");




}
void rulare()
{

    while(balanta>=pretinitial)
   {


     // PlaySound(TEXT("mywavsound.wav"), NULL, SND_FILENAME | SND_ASYNC);

      CreareMatrice();
      CalculLinii();

      balanta -= pretinitial;

      SetConsoleTextAttribute(h,8);
      cout<<endl;
     //+ cout<<"Alt + F4 pentru a iesi"<<endl;
      cout<<endl;
      SetConsoleTextAttribute(h,15);

      cout<<"Balanta finala: "<<balanta+castig<<endl;
      cout<<endl;


      if(pretinitial>balanta+castig)break;



    if(castig>0)
    {



     cout<<endl;
     SetConsoleTextAttribute(h,14);
     cout<<"Dublezi? (< sau > pentru a selecta si dupa apasa enter)"<<endl;

     cout<<"----------                                ----------"<<endl;
     cout<<"|   NU   |                                |   DA   |"<<endl;
     cout<<"----------                                ----------"<<endl;

     SetConsoleTextAttribute(h,15);
      while(true)
      {
          cin>>keypressed;
          if(keypressed=='<')
          {

          balanta+=castig;
          break;
          }
          else if(keypressed=='>')
          {
              dublaj(castig);
              balanta+=castig;
              break;
          }

      }

    } else
    {


       if(nr==1) Informatie();
        system("pause");


       }system("cls");
   }

}

void AnimatieInceput()
{



///1
//SetConsoleTextAttribute(h,4);

Sleep(120);
cout<<"                                %%%%%%%%#%%%%%/                                      (%%%#,              "<<endl;
Sleep(120);
cout<<"                                %%%#(%%%%%%%%%%#%%%%%%%%%%%##**/                  /%%%%%#%%%#*           "<<endl;
Sleep(120);
cout<<"                                %%%&%%%#%%%%%%%%%#%%%%%%%%%##%%%%%%%#/*,     ((%%%%%%%%%#%%#%%%/.        "<<endl;
Sleep(120);
cout<<"                                %%%%#%%%#&&&%%&&%#%%%%%%%%%(#%%%%%##%%%%%%%%%%%%#%%%%##%%%%#%%%%%#       "<<endl;
Sleep(120);
cout<<"                                #%&%(%%%%%#(#%%%%%%%%%%%%%%&%%%%%%(%%%%%%&&&&&%%%#%%%%%%#%%%&%%%         "<<endl;
Sleep(120);
cout<<"                                %%&%#%&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&%%%%%%%%%%%%%%&&&%%%&%&%%%           "<<endl;
Sleep(120);
cout<<"                                %%&%#%&&&@&@@&&&&&&&&@@@&&@&&@&&&&@&&&&&&&&&&&&&&&%%#%&%&&%#             "<<endl;
Sleep(120);
cout<<"                                %&&%#%&&&&&&&&%%%&&&&&&&&&&&&&&&&&&&%%&&&&&@@@&&&%%%&%&&&%.              "<<endl;
Sleep(120);
cout<<"                                %&&%#%&&&&%%#%&@&&&&%%##%%%%%%%%%%%#(%%#%&&&@@&&%#&&%&&%%                "<<endl;
Sleep(120);
cout<<"                                %&&%#%&&%%%@@#&&&&&&&&&%%%&&&&&&&&%%%&@@%%&&&&&%%&%&&%%                  "<<endl;
Sleep(120);
cout<<"                                %&&%%%%%%%@%&&&&%%%%%&&&&&&&&&&&&&&&%@@#%&&&&&%%&%&&%#                   "<<endl;
Sleep(120);
cout<<"                                %&&%%&&&&%%%&&&%           #&&&&&%&@&%&&&&&&&%&&%&&%                     "<<endl;
Sleep(120);
cout<<"                                %&&&&&&&&&&&&&&%        .&&&&&%&&&%%&&&&&&&&%&&&&&#                      "<<endl;
Sleep(120);
cout<<"                                                      %&&&&#&&&%&&&&&&&&&&&%&&&&&%                       "<<endl;
Sleep(120);
cout<<"                                                   %&&&&#&&&%&&&&&&&&&&&&&%&&&&&%                        "<<endl;
Sleep(120);
cout<<"                                                 %&&&&&&&%%&&&&&@@&&&&&&&%&&&&&%                         "<<endl;
Sleep(120);
cout<<"                                               %&&@#&&&%&&&&&&@@@@@@&&&&%%&%@&&                          "<<endl;
Sleep(120);
cout<<"                                             %&&@%&&%%&&&&&@@@@@@@@@&&&%%&%@&&                           "<<endl;
Sleep(120);
cout<<"                                           %&&@%&&#%&&&&&@@@@@@@@@@&&&&%&&@@&                            "<<endl;
Sleep(120);
cout<<"                                         (&&@%&&#%&&&&&@@@@@@@@@@@@@&&&%&%@&&                            "<<endl;
Sleep(120);
cout<<"                                        %&@@%&%%&&&&&&@@@@@@@@@@@@@&&&&%@%@&#                            "<<endl;
Sleep(120);
cout<<"                                       .&&@%&%%&&&&&&@@@@@@@@@@@@@@&&&&%@%@@%                            "<<endl;
Sleep(120);
cout<<"                                       %&@%&%&&&&&&&@@@@@@@@@@@@@@@&&&&%&%@@&                            "<<endl;
Sleep(120);
cout<<"                                       &&@&&&&&&&&&&@@@@@@@@@@@@@&&&&&&%&&@@&                            "<<endl;
Sleep(120);
cout<<"                                       %&@&&%&&&&&&&&&&&&&&&&&&&&&&&&&&%&&%@@%                           "<<endl;
Sleep(120);
cout<<"                                       &&@%&%&%&&%%%%%%&%&%&&%%%%&&%%&&%%%&%@&%                          "<<endl;
Sleep(120);
cout<<"                                       %&&&&@&&&&@@@@&&&@@&&&&&@@@&&&@&@&&&&@&&#                         "<<endl;
Sleep(1000);

//system("pause");

Sleep(120);
system("cls");

cout<<endl;

///2

cout<<"                                ##((((///(////,                                                          "<<endl;
cout<<"                                %%%#%%%%%%%%%%#  ((###(/*/                       (%%%*                   "<<endl;
cout<<"                                %%%%(%%%%%#%%%%%%%%%%#%%%%%%%#/#,             (%%%%%#%%#,                "<<endl;
cout<<"                                #%%%(%%%#&&%%#%%%%#(#%#(#%%%%%%%%%%%%%(#(#%%%%%%#%%##%%%%%*              "<<endl;
cout<<"                                %%%%#%%%%###(%%%%%%%%%%%%%%%%%(#%%%%#%#%%%#%%&%%#%%%%%%%&%%#             "<<endl;
cout<<"                                %%&%#%&&&&&&&&&&&&&&&&&&&&&&&&%%%%%%%%%%#%%%%%%%&%%%&%&%%%               "<<endl;
cout<<"                                #%&%#%&&&@@@&&&&&&&&@@@&@@&@@&&&@&&&&&&&&&&&&&&%%%&%&&%#                 "<<endl;
cout<<"                                %%&%#%&&&&&&&%%%%&%&%&&&&&&&&&&&&&%&&&&&@@@&&&%%&%&&%%                   "<<endl;
cout<<"                                %&&%#%&&&%#%@@@@&&&&&%%(%%%%%%%%##%@&#&&&@&&%%%&%&&%                     "<<endl;
cout<<"                                %&&%#%&&%%@&@&&&&&&&&&&&%%%&%%%%&&&@@%&&&&&&%&%&&%(                      "<<endl;
cout<<"                                %&&%####(%@&&&&       %%&&&&&&&&%&@&%&&&&&%%&%&&%                        "<<endl;
cout<<"                                %&&&&&&&&&&&&&%         #&&&&%&&&%%&&&&&&%&&@&&%                         "<<endl;
cout<<"                                                     %&&&&%&&&%%&&&&&&&&%&%&&&                           "<<endl;
cout<<"                                                  #&&&&%&&&%&&&&&&&&&&&%&%&&&                            "<<endl;
cout<<"                                               .%&&@#&&&%&&&&&@&&&&&&&%&%&&&                             "<<endl;
cout<<"                                             .&&&&%&&%%&&&&@@@@@@&&&&%&&@&&                              "<<endl;
cout<<"                                           *&&@&&&%%&&&&@@@@@@@@@&&&%%&&&&/                              "<<endl;
cout<<"                                          &&@%&&%%&&&&&@@@@@@@@@@&&&%&%@&/                               "<<endl;
cout<<"                                        &&@@%&#%&&&&&@@@@@@@@@@@@&&%%&@@&                                "<<endl;
cout<<"                                       %&@%&%%&&&&&@@@@@@@@@@@@@&&&%&&@@%                                "<<endl;
cout<<"                                      /&@&&%%&&&&&@@@@@@@@@@@@@@&&&&&&@@&                                "<<endl;
cout<<"                                      %&@%&%&&&&&@&@@@@@@@@@@@&&&&&&&&&@&                                "<<endl;
cout<<"                                      %&@&%%&&&&&&&&&&&&&&&&&&&&&&&&%&%@@%                               "<<endl;
cout<<"                                      &&@%&%&%&&%%%%&&%&%&&%%%&&%%&%%%%&@&%                              "<<endl;
cout<<"                                      %&&&@&&&&&@@@&&&&@&&&&&&&&&&&&&&&&&&&(                             "<<endl;


Sleep(120);
system("cls");
cout<<endl;
cout<<endl;

///3


cout<<"                                %%%%%%%%%%%%#     ,,                         /##                         "<<endl;
cout<<"                                %%%&#(%#%#%%%%%%%%%%%%%%%#(,(             *%%%%#%%/                      "<<endl;
cout<<"                                #%%%%%%%&&%%#%%%#((%##%%%%%%%%%%%%(((#%%%%%%%%%#%%%%((                   "<<endl;
cout<<"                                %%&%%%%%%#(%%%%%%%%%%%%%%%%##%%%%##%##%%%&%#%%%%%%%%%%                   "<<endl;
cout<<"                                #%&%%&&&&&&&&&&&&&@&&&&&&&&&&%%%%%%%%%%%%%%%&%%&%&%%                     "<<endl;
cout<<"                                #%&%%%&&@@&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&%%%&%&%%                       "<<endl;
cout<<"                                %&&&%&&&&&%%%(((%%%%&&&&&&&&&&%%%&&&@@&&&%%&%&&%.                        "<<endl;
cout<<"                                %&&&%&&%%%@&%&&&&&%%&&&%%%%%&&@@@@%&&&&&%&&&&%%                          "<<endl;
cout<<"                                %&&%%%%%&&@&&&#/%%&&&&&&&&&&&&&@@#&&&&&%&%&&%                            "<<endl;
cout<<"                                %&&%%%%%%%&&&*         &&&&#&@&%&&&&&&%&%&&%                             "<<endl;
cout<<"                                %%%%%&%%&&&&&*      &&&&#&&&%&&&&&&&%%&&&&                               "<<endl;
cout<<"                                                 %&&@#&&&%&&&&&&&&&%&&&&%                                "<<endl;
cout<<"                                              %%&&%&&&%&&&&@&&&&&&%&&@&&                                 "<<endl;
cout<<"                                            %&&@%&&%&&&&&@@@@@@&&&%&@&&                                  "<<endl;
cout<<"                                          %&&@&&#%&&&&@@@@@@@@&&&%&%@&,                                  "<<endl;
cout<<"                                        %&&@%&#%&&&&@@@@@@@@@@&&%&&@&(                                   "<<endl;
cout<<"                                       &&@%&%%&&&&@@@@@@@@@@@&&&%&%@&*                                   "<<endl;
cout<<"                                      %&@%&%&&&&&@@@@@@@@@@@@&&&%&%@&                                    "<<endl;
cout<<"                                      &@%&%&&&&@@@@@@@@@@@@@@&&&%&%@@                                    "<<endl;
cout<<"                                     .&&%%%&&&&&&&&&&@@&@&&&&&&&&&&@@%                                   "<<endl;
cout<<"                                      &&%&&&&&&&&&&&&&&&&&&&&&&&&%&&@&#                                  "<<endl;
cout<<"                                      &&&@&&&&@@@&@&&@&&&@@@@&&&@&&&&@&(                                 "<<endl;

Sleep(120);
system("cls");
cout<<endl;
cout<<endl;
cout<<endl;


///4

cout<<"                                %%%%%%%%%%%(    .,.                      (%*                            "<<endl;
cout<<"                                %%%#%%#%%%%%%%%%%#%%%%#%#*/           (%%%%%%#,                         "<<endl;
cout<<"                                #%%%%%#&&&%%%%#%%%%%(#%%%#%%%%%%%%%%%%%#%%##%%%%*                       "<<endl;
cout<<"                                #%&%%&&&%%%%&&&&&&&&%&%%%%%#%%%%%%%%%%#%%%%%%%%%%                       "<<endl;
cout<<"                                #%&%%&&&&&&&&&@@@@@&&&&&&&&&&&%%%&&%%%&&%%&%&%#                         "<<endl;
cout<<"                                %&&%%&&&&&&%%%&&&&&&&&&&&&&&&&&&@@@@&&%%&%&%#                           "<<endl;
cout<<"                                %&&&%&&%%%@@@&&&&&%(%%%%%%(#&@#%&&@&%%&%&&#                             "<<endl;
cout<<"                                %&&&%%%#@#&&&&&&&&&&&&&&&&&&&@@%&&&&%&&&%                               "<<endl;
cout<<"                                %&&%@&%%%&&&         &&&&%&@%%&&&&%&&&&%                                "<<endl;
cout<<"                                %&&&&&&&&&&&      #&&&#&&%%&&&&&&%&%&&#                                 "<<endl;
cout<<"                                               %%&&#&&#&&&&&&&&&%&%&&                                   "<<endl;
cout<<"                                             %&&%&&%&&&&@@@&&&&%&%&&                                    "<<endl;
cout<<"                                           &&@%&&%&&&&@@@@@&&&%&%@&.                                    "<<endl;
cout<<"                                        #&&@%&#&&&&@@@@@@@@&&%%&@&#                                     "<<endl;
cout<<"                                       &&@%&%%&&&&@@@@@@@@@&&%&%@&                                      "<<endl;
cout<<"                                      &&@&%%&&&&@@@@@@@@@@&&&%@%@#                                      "<<endl;
cout<<"                                     %&@&%&&&&&@@@@@@@@@@@&&&%&%@&                                      "<<endl;
cout<<"                                     %&%&%&&&&&@@@@@@@@@@&&&&%&%@&                                      "<<endl;
cout<<"                                     &&&&&&&&&&&&&&&&&&&&&&&&&%&%&&                                     "<<endl;
cout<<"                                     &&@@@&&&@&@&&&&&&&&&&&&&&&&&&&%                                    "<<endl;


Sleep(120);
system("cls");
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;


///5 (cmm)

cout<<"                                %%%%%%%%%#   //**                  #%,                                 "<<endl;
cout<<"                                %%%%%#%#%%%%#%%%##%%#%#*       /%%%##%%#                               "<<endl;
cout<<"                                #%%%%%#&&##%%%%%%%%##%&%#%%%%%%#%%%%%##%%%,                            "<<endl;
cout<<"                                %&%%&&&&&&&&&&@&&&&&&&&%%%%%%%%%&%&#&%&%.                              "<<endl;
cout<<"                                #&%%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&%&%/                                "<<endl;
cout<<"                                %&%%&&&#&@@&&&&%(%%%%%##&&%&&@&%%&&&%                                  "<<endl;
cout<<"                                %&%%%%%&&&&&%&&&&&&&&&&&%@%&&&%&%&%                                    "<<endl;
cout<<"                                %&&&&&&@&&.      %&&&%@%%&&&&%&&&%                                     "<<endl;
cout<<"                                              #&&&&&%%&&&&&&%&&&                                       "<<endl;
cout<<"                                           .%&&%&%&&&&&&&&&%&&&                                        "<<endl;
cout<<"                                         %&&%&&&&&&@@@@@&&%&@&                                         "<<endl;
cout<<"                                       %&@%&%&&&@@@@@@@&&%&&&(                                         "<<endl;
cout<<"                                      &@#&%&&&&@@@@@@@@&&%&@&                                          "<<endl;
cout<<"                                     &@%%&&&&&@@@@@@@@@&&%&@&                                          "<<endl;
cout<<"                                    %&%&%&&&@@@@@@@@@&&&&%&@&                                          "<<endl;
cout<<"                                    %&%%&&&&&&&&&&&&&&&&&%&%@                                          "<<endl;
cout<<"                                    #&%&&&&%%%%%%%&&&%&%%%%%%&(                                        "<<endl;


Sleep(120);
system("cls");
cout<<endl;
cout<<endl;
cout<<endl;


///6

cout<<"                                %%%%%%%%%%%(    .,.                      (%*                            "<<endl;
cout<<"                                %%%#%%#%%%%%%%%%%#%%%%#%#*/           (%%%%%%#,                         "<<endl;
cout<<"                                #%%%%%#&&&%%%%#%%%%%(#%%%#%%%%%%%%%%%%%#%%##%%%%*                       "<<endl;
cout<<"                                #%&%%&&&%%%%&&&&&&&&%&%%%%%#%%%%%%%%%%#%%%%%%%%%%                       "<<endl;
cout<<"                                #%&%%&&&&&&&&&@@@@@&&&&&&&&&&&%%%&&%%%&&%%&%&%#                         "<<endl;
cout<<"                                %&&%%&&&&&&%%%&&&&&&&&&&&&&&&&&&@@@@&&%%&%&%#                           "<<endl;
cout<<"                                %&&&%&&%%%@@@&&&&&%(%%%%%%(#&@#%&&@&%%&%&&#                             "<<endl;
cout<<"                                %&&&%%%#@#&&&&&&&&&&&&&&&&&&&@@%&&&&%&&&%                               "<<endl;
cout<<"                                %&&%@&%%%&&&         &&&&%&@%%&&&&%&&&&%                                "<<endl;
cout<<"                                %&&&&&&&&&&&      #&&&#&&%%&&&&&&%&%&&#                                 "<<endl;
cout<<"                                               %%&&#&&#&&&&&&&&&%&%&&                                   "<<endl;
cout<<"                                             %&&%&&%&&&&@@@&&&&%&%&&                                    "<<endl;
cout<<"                                           &&@%&&%&&&&@@@@@&&&%&%@&.                                    "<<endl;
cout<<"                                        #&&@%&#&&&&@@@@@@@@&&%%&@&#                                     "<<endl;
cout<<"                                       &&@%&%%&&&&@@@@@@@@@&&%&%@&                                      "<<endl;
cout<<"                                      &&@&%%&&&&@@@@@@@@@@&&&%@%@#                                      "<<endl;
cout<<"                                     %&@&%&&&&&@@@@@@@@@@@&&&%&%@&                                      "<<endl;
cout<<"                                     %&%&%&&&&&@@@@@@@@@@&&&&%&%@&                                      "<<endl;
cout<<"                                     &&&&&&&&&&&&&&&&&&&&&&&&&%&%&&                                     "<<endl;
cout<<"                                     &&@@@&&&@&@&&&&&&&&&&&&&&&&&&&%                                    "<<endl;

Sleep(120);
system("cls");
cout<<endl;
cout<<endl;

///7


cout<<"                                %%%%%%%%%%%%#     ,,                         /##                         "<<endl;
cout<<"                                %%%&#(%#%#%%%%%%%%%%%%%%%#(,(             *%%%%#%%/                      "<<endl;
cout<<"                                #%%%%%%%&&%%#%%%#((%##%%%%%%%%%%%%(((#%%%%%%%%%#%%%%((                   "<<endl;
cout<<"                                %%&%%%%%%#(%%%%%%%%%%%%%%%%##%%%%##%##%%%&%#%%%%%%%%%%                   "<<endl;
cout<<"                                #%&%%&&&&&&&&&&&&&@&&&&&&&&&&%%%%%%%%%%%%%%%&%%&%&%%                     "<<endl;
cout<<"                                #%&%%%&&@@&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&%%%&%&%%                       "<<endl;
cout<<"                                %&&&%&&&&&%%%(((%%%%&&&&&&&&&&%%%&&&@@&&&%%&%&&%.                        "<<endl;
cout<<"                                %&&&%&&%%%@&%&&&&&%%&&&%%%%%&&@@@@%&&&&&%&&&&%%                          "<<endl;
cout<<"                                %&&%%%%%&&@&&&#/%%&&&&&&&&&&&&&@@#&&&&&%&%&&%                            "<<endl;
cout<<"                                %&&%%%%%%%&&&*         &&&&#&@&%&&&&&&%&%&&%                             "<<endl;
cout<<"                                %%%%%&%%&&&&&*      &&&&#&&&%&&&&&&&%%&&&&                               "<<endl;
cout<<"                                                 %&&@#&&&%&&&&&&&&&%&&&&%                                "<<endl;
cout<<"                                              %%&&%&&&%&&&&@&&&&&&%&&@&&                                 "<<endl;
cout<<"                                            %&&@%&&%&&&&&@@@@@@&&&%&@&&                                  "<<endl;
cout<<"                                          %&&@&&#%&&&&@@@@@@@@&&&%&%@&,                                  "<<endl;
cout<<"                                        %&&@%&#%&&&&@@@@@@@@@@&&%&&@&(                                   "<<endl;
cout<<"                                       &&@%&%%&&&&@@@@@@@@@@@&&&%&%@&*                                   "<<endl;
cout<<"                                      %&@%&%&&&&&@@@@@@@@@@@@&&&%&%@&                                    "<<endl;
cout<<"                                      &@%&%&&&&@@@@@@@@@@@@@@&&&%&%@@                                    "<<endl;
cout<<"                                     .&&%%%&&&&&&&&&&@@&@&&&&&&&&&&@@%                                   "<<endl;
cout<<"                                      &&%&&&&&&&&&&&&&&&&&&&&&&&&%&&@&#                                  "<<endl;
cout<<"                                      &&&@&&&&@@@&@&&@&&&@@@@&&&@&&&&@&(                                 "<<endl;

Sleep(120);
system("cls");

cout<<endl;

///8

cout<<"                                ##((((///(////,                                                          "<<endl;
cout<<"                                %%%#%%%%%%%%%%#  ((###(/*/                       (%%%*                   "<<endl;
cout<<"                                %%%%(%%%%%#%%%%%%%%%%#%%%%%%%#/#,             (%%%%%#%%#,                "<<endl;
cout<<"                                #%%%(%%%#&&%%#%%%%#(#%#(#%%%%%%%%%%%%%(#(#%%%%%%#%%##%%%%%*              "<<endl;
cout<<"                                %%%%#%%%%###(%%%%%%%%%%%%%%%%%(#%%%%#%#%%%#%%&%%#%%%%%%%&%%#             "<<endl;
cout<<"                                %%&%#%&&&&&&&&&&&&&&&&&&&&&&&&%%%%%%%%%%#%%%%%%%&%%%&%&%%%               "<<endl;
cout<<"                                #%&%#%&&&@@@&&&&&&&&@@@&@@&@@&&&@&&&&&&&&&&&&&&%%%&%&&%#                 "<<endl;
cout<<"                                %%&%#%&&&&&&&%%%%&%&%&&&&&&&&&&&&&%&&&&&@@@&&&%%&%&&%%                   "<<endl;
cout<<"                                %&&%#%&&&%#%@@@@&&&&&%%(%%%%%%%%##%@&#&&&@&&%%%&%&&%                     "<<endl;
cout<<"                                %&&%#%&&%%@&@&&&&&&&&&&&%%%&%%%%&&&@@%&&&&&&%&%&&%(                      "<<endl;
cout<<"                                %&&%####(%@&&&&       %%&&&&&&&&%&@&%&&&&&%%&%&&%                        "<<endl;
cout<<"                                %&&&&&&&&&&&&&%         #&&&&%&&&%%&&&&&&%&&@&&%                         "<<endl;
cout<<"                                                     %&&&&%&&&%%&&&&&&&&%&%&&&                           "<<endl;
cout<<"                                                  #&&&&%&&&%&&&&&&&&&&&%&%&&&                            "<<endl;
cout<<"                                               .%&&@#&&&%&&&&&@&&&&&&&%&%&&&                             "<<endl;
cout<<"                                             .&&&&%&&%%&&&&@@@@@@&&&&%&&@&&                              "<<endl;
cout<<"                                           *&&@&&&%%&&&&@@@@@@@@@&&&%%&&&&/                              "<<endl;
cout<<"                                          &&@%&&%%&&&&&@@@@@@@@@@&&&%&%@&/                               "<<endl;
cout<<"                                        &&@@%&#%&&&&&@@@@@@@@@@@@&&%%&@@&                                "<<endl;
cout<<"                                       %&@%&%%&&&&&@@@@@@@@@@@@@&&&%&&@@%                                "<<endl;
cout<<"                                      /&@&&%%&&&&&@@@@@@@@@@@@@@&&&&&&@@&                                "<<endl;
cout<<"                                      %&@%&%&&&&&@&@@@@@@@@@@@&&&&&&&&&@&                                "<<endl;
cout<<"                                      %&@&%%&&&&&&&&&&&&&&&&&&&&&&&&%&%@@%                               "<<endl;
cout<<"                                      &&@%&%&%&&%%%%&&%&%&&%%%&&%%&%%%%&@&%                              "<<endl;
cout<<"                                      %&&&@&&&&&@@@&&&&@&&&&&&&&&&&&&&&&&&&(                             "<<endl;


///9

Sleep(120);
system("cls");

cout<<"                                %%%%%%%%#%%%%%/                                      (%%%#,              "<<endl;
cout<<"                                %%%#(%%%%%%%%%%#%%%%%%%%%%%##**/                  /%%%%%#%%%#*           "<<endl;
cout<<"                                %%%&%%%#%%%%%%%%%#%%%%%%%%%##%%%%%%%#/*,     ((%%%%%%%%%#%%#%%%/.        "<<endl;
cout<<"                                %%%%#%%%#&&&%%&&%#%%%%%%%%%(#%%%%%##%%%%%%%%%%%%#%%%%##%%%%#%%%%%#       "<<endl;
cout<<"                                #%&%(%%%%%#(#%%%%%%%%%%%%%%&%%%%%%(%%%%%%&&&&&%%%#%%%%%%#%%%&%%%         "<<endl;
cout<<"                                %%&%#%&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&%%%%%%%%%%%%%%&&&%%%&%&%%%           "<<endl;
cout<<"                                %%&%#%&&&@&@@&&&&&&&&@@@&&@&&@&&&&@&&&&&&&&&&&&&&&%%#%&%&&%#             "<<endl;
cout<<"                                %&&%#%&&&&&&&&%%%&&&&&&&&&&&&&&&&&&&%%&&&&&@@@&&&%%%&%&&&%.              "<<endl;
cout<<"                                %&&%#%&&&&%%#%&@&&&&%%##%%%%%%%%%%%#(%%#%&&&@@&&%#&&%&&%%                "<<endl;
cout<<"                                %&&%#%&&%%%@@#&&&&&&&&&%%%&&&&&&&&%%%&@@%%&&&&&%%&%&&%%                  "<<endl;
cout<<"                                %&&%%%%%%%@%&&&&%%%%%&&&&&&&&&&&&&&&%@@#%&&&&&%%&%&&%#                   "<<endl;
cout<<"                                %&&%%&&&&%%%&&&%           #&&&&&%&@&%&&&&&&&%&&%&&%                     "<<endl;
cout<<"                                %&&&&&&&&&&&&&&%        .&&&&&%&&&%%&&&&&&&&%&&&&&#                      "<<endl;
cout<<"                                                      %&&&&#&&&%&&&&&&&&&&&%&&&&&%                       "<<endl;
cout<<"                                                   %&&&&#&&&%&&&&&&&&&&&&&%&&&&&%                        "<<endl;
cout<<"                                                 %&&&&&&&%%&&&&&@@&&&&&&&%&&&&&%                         "<<endl;
cout<<"                                               %&&@#&&&%&&&&&&@@@@@@&&&&%%&%@&&                          "<<endl;
cout<<"                                             %&&@%&&%%&&&&&@@@@@@@@@&&&%%&%@&&                           "<<endl;
cout<<"                                           %&&@%&&#%&&&&&@@@@@@@@@@&&&&%&&@@&                            "<<endl;
cout<<"                                         (&&@%&&#%&&&&&@@@@@@@@@@@@@&&&%&%@&&                            "<<endl;
cout<<"                                        %&@@%&%%&&&&&&@@@@@@@@@@@@@&&&&%@%@&#                            "<<endl;
cout<<"                                       .&&@%&%%&&&&&&@@@@@@@@@@@@@@&&&&%@%@@%                            "<<endl;
cout<<"                                       %&@%&%&&&&&&&@@@@@@@@@@@@@@@&&&&%&%@@&                            "<<endl;
cout<<"                                       &&@&&&&&&&&&&@@@@@@@@@@@@@&&&&&&%&&@@&                            "<<endl;
cout<<"                                       %&@&&%&&&&&&&&&&&&&&&&&&&&&&&&&&%&&%@@%                           "<<endl;
cout<<"                                       &&@%&%&%&&%%%%%%&%&%&&%%%%&&%%&&%%%&%@&%                          "<<endl;
cout<<"                                       %&&&&@&&&&@@@@&&&@@&&&&&@@@&&&@&@&&&&@&&#                         "<<endl;

Sleep(1200);
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

cout<<"                                ---------------------------------------------------------------"<<endl;
Sleep(120);
cout<<"                                |                                                             |"<<endl;
Sleep(120);
cout<<"                                |                Pacaneaua Septarului Bagaret                 |"<<endl;
Sleep(120);
cout<<"                                |                                                             |"<<endl;
Sleep(120);
cout<<"                                ---------------------------------------------------------------"<<endl;

Sleep(2000);
SetConsoleTextAttribute(h,15);


LoadingScreen(5);

}



void FullScreen()
{

    system("mode con COLS=700");
   ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
   SendMessage(GetConsoleWindow(),WM_SYSKEYDOWN,VK_RETURN,0x20000000);

}

int main()
{


   FullScreen();
   AnimatieInceput();



   InitializareIndici();

   // cout<<"Sansa de a pica cireasa , pruna , portocala , lamaie , strugure si pepene: ";
    fin>>cireasa.sansa;
   // cout<<endl;

    InitializareSanse();


   // cout<<"Valoarea ciresei este de: "
    fin>>cireasa.valoare;
   // cout<<endl;


   // cout<<"Valoarea prunei , portocalei si lamaiei este de: "
    fin>>portocala.valoare;
   // cout<<endl;


    pruna.valoare=portocala.valoare;
    lamaie.valoare=portocala.valoare;


   // cout<<"Valoarea strugurelui si pepenelui este de: "
    fin>>strugure.valoare;
   // cout<<endl;

    pepene.valoare=strugure.valoare;

   // cout<<"Sansa de a pica sepatrul: ";
    fin>>septar.sansa;
   // cout<<endl;

   // cout<<"Valoarea ciresei este de: "
    fin>>septar.valoare;
   // cout<<endl;





    cout<<"Doresti sa iti afiseze informatiile despre pacanea pe ecran? (1=DA , 0=NU)";
    cout<<endl;
    cin>>nr;

    system("cls");


    cout<<"Introduceti Balanta: ";
    cin>>balanta;
    cout<<endl;


    cout<<"Introduceti Pret: ";
    cin>>pretinitial;
    cout<<endl;



   if(balanta<pretinitial || balanta<=0 || pretinitial<=0)return 0;

   LoadingScreen(3);
   rulare();


    return 0;
}
