#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;



int main()
{
    //-----------------------------VARIABLES---------------------------
    int winner=0,k=1,l=1,oo=1;
    char p[10];int pos[3][3]; int o[10];
 for (int x=0;x<3;x++)
  for (int y=0;y<3;y++)
  {
      pos[x][y]=k;
      k++;
  }
  for (int x=0;x<3;x++)
  for (int y=0;y<3;y++)
  {
      p[l]=pos[x][y]+'0';
      l++;
  }

//---------------------------------GAME LOOP-----------------------------------

  while (winner==0)
  {

//--------------VARIABLES AND DRAWING THE GAME TABLE-----------------
      int n,nr=0,asd=1,ss=0;
      srand(time(NULL));
      int h;
      system("cls");

   cout<<endl;
   cout<<"          |         |                                     "<<endl;
   cout<<"       "<<p[1]<<"  |    "<<p[2]<<"    |    "<<p[3]<<"                                "<<endl;
   cout<<"          |         |                                     "<<endl;
   cout<<"    ------|---------|-------                              "<<endl;
   cout<<"          |         |                                     "<<endl;
   cout<<"       "<<p[4]<<"  |    "<<p[5]<<"    |    "<<p[6]<<"                                "<<endl;
   cout<<"          |         |                                     "<<endl;
   cout<<"    ------|---------|-------                              "<<endl;
   cout<<"          |         |                                     "<<endl;
   cout<<"       "<<p[7]<<"  |    "<<p[8]<<"    |    "<<p[9]<<"                                "<<endl;
   cout<<"          |         |                                     "<<endl;

cout<<endl;
//------------------------------------POSITION CHOOSING SYSTEM-----------------
cout<<"    CHOOSE A POSITION NUMBER:";
cin>>h;
while(!isdigit(p[h]))
{cout<<endl<<"    THE POSITION IS TAKEN CHOOSE ANOTHER:";cin>>h;}
o[oo]=h;

p[h]='X';
int v=1;
 for (int x=0;x<3;x++)
  for (int y=0;y<3;y++)
  {
     if (p[v]=='X') {pos[x][y]=0;}
     v++;
  }

for (int x=0;x<3;x++)
  for (int y=0;y<3;y++)
      {
       if (pos[x][y]==asd)  {ss++;}
       asd++;

      }
      if (ss==0) {winner=3;break;}

//---------------------------------PLAYER POSITIONS VERIFICATION SYSTEM---------------------






  nr=0;
 for (int x=0;x<3;x++)
 {


  for (int y=0;y<3;y++)
{

   if (pos[x][y]==0) {nr++;}


}
 if (nr==3) {winner=1;break;}






 nr=0;
 }

  nr=0;
 for (int x=0;x<3;x++)
 {


  for (int y=0;y<3;y++)
{

   if (pos[y][x]==0) {nr++;}


}
 if (nr==3) {winner=1;break;}
 nr=0;
 }




 if ((pos[0][0]==0) && (pos[1][1]==0) && (pos[2][2]==0)) {winner=1;}


if ((pos[0][2]==0) && (pos[1][1]==0) && (pos[2][0]==0)) {winner=1;}




 if ((o[1]==5)&&(oo==1)) {p[3]='O';}
 else if ((o[1]!=5)&&(oo==1)) {p[5]='O';}



while((winner==0)&&(oo!=1))
{
  n=rand()%10+1;
 if ((p[1]=='X') && (p[2]=='X') && (isdigit(p[3]))) {p[3]='O';break;}
 if ((p[2]=='X') && (p[3]=='X') && (isdigit(p[1]))) {p[1]='O';break;}
 if ((p[3]=='X') && (p[1]=='X') && (isdigit(p[2]))) {p[2]='O';break;}

 if ((p[4]=='X') && (p[5]=='X') && (isdigit(p[6]))) {p[6]='O';break;}
 if ((p[4]=='X') && (p[6]=='X') && (isdigit(p[5]))) {p[5]='O';break;}
 if ((p[5]=='X') && (p[6]=='X') && (isdigit(p[4]))) {p[4]='O';break;}

 if ((p[7]=='X') && (p[8]=='X') && (isdigit(p[9]))) {p[9]='O';break;}
 if ((p[8]=='X') && (p[9]=='X') && (isdigit(p[7]))) {p[7]='O';break;}
 if ((p[7]=='X') && (p[9]=='X') && (isdigit(p[8]))) {p[8]='O';break;}

 if ((p[1]=='X') && (p[5]=='X') && (isdigit(p[9]))) {p[9]='O';break;}
 if ((p[1]=='X') && (p[9]=='X') && (isdigit(p[5]))) {p[5]='O';break;}
 if ((p[5]=='X') && (p[9]=='X') && (isdigit(p[1]))) {p[1]='O';break;}

 if ((p[3]=='X') && (p[5]=='X') && (isdigit(p[7]))) {p[7]='O';break;}
 if ((p[3]=='X') && (p[7]=='X') && (isdigit(p[5]))) {p[5]='O';break;}
 if ((p[5]=='X') && (p[7]=='X') && (isdigit(p[3]))) {p[3]='O';break;}

 if ((p[1]=='X') && (p[4]=='X') && (isdigit(p[7]))) {p[7]='O';break;}
 if ((p[1]=='X') && (p[7]=='X') && (isdigit(p[4]))) {p[4]='O';break;}
 if ((p[7]=='X') && (p[4]=='X') && (isdigit(p[1]))) {p[1]='O';break;}

 if ((p[2]=='X') && (p[5]=='X') && (isdigit(p[8]))) {p[8]='O';break;}
 if ((p[5]=='X') && (p[8]=='X') && (isdigit(p[2]))) {p[2]='O';break;}
 if ((p[8]=='X') && (p[2]=='X') && (isdigit(p[5]))) {p[5]='O';break;}

 if ((p[3]=='X') && (p[6]=='X') && (isdigit(p[9]))) {p[9]='O';break;}
 if ((p[6]=='X') && (p[9]=='X') && (isdigit(p[3]))) {p[3]='O';break;}
 if ((p[3]=='X') && (p[9]=='X') && (isdigit(p[6]))) {p[6]='O';break;}


 if (isdigit(p[n])) {p[n]='O';break;}

}

int u=1;
 for (int x=0;x<3;x++)
  for (int y=0;y<3;y++)
  {
   if (p[u]=='O') {pos[x][y]=10;}
   u++;
  }

//-----------------------------------COMPUTER POSITIONS VERIFICATION SYSTEM----------------


nr=0;
 for (int x=0;x<3;x++)
 {


  for (int y=0;y<3;y++)
{

   if (pos[x][y]==10) {nr++;}


}
 if (nr==3) {winner=2;break;}
 nr=0;
 }

  nr=0;
 for (int x=0;x<3;x++)
 {


  for (int y=0;y<3;y++)
{

   if (pos[y][x]==10) {nr++;}


}
 if (nr==3) {winner=2;break;}
 nr=0;
 }




 if ((pos[0][0]==10) && (pos[1][1]==10) && (pos[2][2]==10)) {winner=2;}


if ((pos[0][2]==10) && (pos[1][1]==10) && (pos[2][0]==10)) {winner=2;}




oo++;


  }
     system("cls");
   cout<<endl;
   cout<<"          |         |                                     "<<endl;
   cout<<"       "<<p[1]<<"  |    "<<p[2]<<"    |    "<<p[3]<<"                                "<<endl;
   cout<<"          |         |                                     "<<endl;
   cout<<"    ------|---------|-------                              "<<endl;
   cout<<"          |         |                                     "<<endl;
   cout<<"       "<<p[4]<<"  |    "<<p[5]<<"    |    "<<p[6]<<"                                "<<endl;
   cout<<"          |         |                                     "<<endl;
   cout<<"    ------|---------|-------                              "<<endl;
   cout<<"          |         |                                     "<<endl;
   cout<<"       "<<p[7]<<"  |    "<<p[8]<<"    |    "<<p[9]<<"                                "<<endl;
   cout<<"          |         |                                     "<<endl;


  cout<<endl<<endl;
  if (winner==1) {cout<<"       THE PLAYER WIN!"<<endl;}
  else if (winner==2) {cout<<"        THE COMPUTER WIN!"<<endl;}
  else if (winner==3) {cout<<"              TIE!"<<endl;}

  Sleep(3000);
    return 0;
}
