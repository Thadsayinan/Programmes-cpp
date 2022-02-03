#include <iostream>
using namespace std;

int main ()

{
   int nbr;
   cout<<"Entrez un nombre svp !"<<endl;
   cin>>nbr;

   if (nbr % 2==0)

   {

    cout<<"La valeur  "<<nbr<<"  est un nombre Pair."<<endl;

   }

else 
    cout <<"La valeur " <<nbr<< " est un nombre  impair."<<endl;

return 0;

}