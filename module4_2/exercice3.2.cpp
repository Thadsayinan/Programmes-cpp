#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main ()

{

char tabAdresse[16],taboctet1[4],taboctet2[4],taboctet3[4],taboctet4[4];
int tabsep[4],i,entier1,entier2,entier3,entier4,nbrSep=0;


cout<<"Tapez une adresse IP sous la forme xxx.xxx.xxx.xxx"<<endl;
cin.getline(tabAdresse,15);
for(i=0;i<strlen(tabAdresse);i++)
{

if (tabAdresse[i]<48 || tabAdresse[i]>57)
   {

   tabsep[nbrSep]=i;
   nbrSep=nbrSep+1;
 
  }

}

cout<<"Position de 1er separaeteur : "<<tabsep[0]+1<<endl;
cout<<"Position de 2eme separaeteur : "<<tabsep[1]+1<<endl;
cout<<"Position de 3eme separaeteur : "<<tabsep[2]+1<<endl;





strncpy(taboctet1,tabAdresse,3);
strncpy(taboctet2,tabAdresse+tabsep[0]+1,3);
strncpy(taboctet3,tabAdresse+tabsep[1]+1,3);
strncpy(taboctet4,tabAdresse+tabsep[2]+1,3);


entier1=atoi(taboctet1);
entier2=atoi(taboctet2);
entier3=atoi(taboctet3);
entier4=atoi(taboctet4);




cout<<entier1<<endl;
cout<<entier2<<endl;
cout<<entier3<<endl;
cout<<entier4<<endl;

 return 0;
}