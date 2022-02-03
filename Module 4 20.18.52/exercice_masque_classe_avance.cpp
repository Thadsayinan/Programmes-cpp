#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main ()

{

char tabAdresse[16],taboctet1[4],taboctet2[4],taboctet3[4],taboctet4[4],sep1[2],sep2[2],sep3[2];
int tabsep[3],i,entier1,entier2,entier3,entier4,nbrSep=0;
string reponse;


cout<<"Tapez une adresse IP sous la forme xxx.xxx.xxx.xxx"<<endl;
cin.getline(tabAdresse,16);
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

strncpy(sep1,tabAdresse+tabsep[0],1);
strncpy(sep2,tabAdresse+tabsep[1],1);
strncpy(sep3,tabAdresse+tabsep[2],1);


entier1=atoi(taboctet1);
entier2=atoi(taboctet2);
entier3=atoi(taboctet3);
entier4=atoi(taboctet4);




cout<<entier1<<endl;
cout<<entier2<<endl;
cout<<entier3<<endl;
cout<<entier4<<endl;

if(sep1[0],sep2[0],sep3[0]!='.')
{
  cout<<"Mettez un point pour separer les  octets svp !!"<<endl;


}
if(entier1,entier2,entier3,entier4<0 || entier1,entier2,entier3,entier4>255)

{

  cout<<"les nombres entre les separateurs sont compris entre 0 et 255"<<endl;
}

do
{
cout<<"Est-ce que vous voulez savoir le masque et la classe correspondant de "<<tabAdresse<<endl;
cin>>reponse;

if(entier1>0 && entier1<128)
{
cout<<tabAdresse<<" c'est une classe A"<<endl; 
cout<<"Le masque de ce reseau est 255.0.0.0"<<endl;

}


 else if (entier1>127 && entier1<192)
{
cout<<tabAdresse<<" c'est une classe B"<<endl;
cout<<"Le masque de ce reseau est 255.255.0.0"<<endl;

}

else if (entier1>191 && entier1<256)
{
cout<<tabAdresse<<" c'est une classe C"<<endl; 
cout<<"Le masque de ce reseau est 255.255.255.0"<<endl;

}

}
while(reponse=="oui");

cout<<tabsep[1]<<endl;
cout<<sep1<<endl;
 return 0;
}