#include <iostream>
using namespace std;
#include "string"
int main ()

{
   float valeur1,valeur2;
   char op;
   int resultat;

      cout<<"Entrez une operation svp !"<<endl;
      cin>>op;
      cout<<"Entrez deux valeur svp !"<<endl;
      cin>>valeur1>>valeur2;
  

  
   switch (op)

        {
           case '+' :

              cout<<valeur1<<"+"<<valeur2<<"="<<valeur1+valeur2<<endl;

           break;

           case '-' :

             cout<<valeur1<<"-"<<valeur2<<"="<<valeur1-valeur2<<endl;

           break;

           case '/' :

              cout<<valeur1<<"/"<<valeur2<<"="<<valeur1/valeur2<<endl;

           break;

           case '*' :

           cout<<valeur1<<"*"<<valeur2<<"="<<valeur1*valeur2<<endl;

           break;
        
         default:
           cout<<"Erreur : l'operation "<<op<<" n'est pas correct"<<endl;

         }

  
return 0;

}