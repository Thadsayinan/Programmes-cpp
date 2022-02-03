#include <iostream>
using namespace std;

int main ()

{
  
  int tab [ 10],i;
  double somme=0;
  int numero;



 cout<<"Tapez les notes ici."<<endl;

  for(i=1;i<=10;i++)
  {
 
  cout<<"tapez la note  "<<i<<endl;
  cin>>tab[i];
  somme=somme+tab[i]; 


  }

  somme=somme/10;
cout<<"la moyenne est "<<somme<<endl;
cout<<"entrez le numero de note : "<<endl;
cin>>numero;


cout<<"la note est :" <<tab[numero]<<endl;





return 0;


}