#include <iostream>
#include <cstring>
using namespace std;


int main ()

{

char tabPhrase[50];
int i,j=0;


cout<<"Tapez une phrase contenant 49 caracteres au maximum."<<endl;
cin.getline(tabPhrase,50);
for(i=0;i<50;i++)
{
if (tabPhrase[i]==32 )
  j=j+1;
}
  cout<<"Dans la phrase,<<"<<tabPhrase<< " >> on trouve " <<j+1<< " mots."<<endl;

 




 return 0;
}