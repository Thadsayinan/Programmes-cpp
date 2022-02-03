#include <iostream>
using namespace std;

int main ()

{
int i ;
string reponse="oui";

do
{
for (i=0;i<100;i=i+1)

{

cout<<"iteration "<<i<<endl;

}

cout<<"valeur de i apres la boucle "<<i<<endl ;
cout<<"Voulez-vous afficher a nouveau cette boucle ? "<<endl;
cin>>reponse;

}

while (reponse=="oui");

return 0 ;
 
}