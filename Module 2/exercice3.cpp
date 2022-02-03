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


   if (op=='+')

    {
      
       cout<<valeur1+valeur2<<endl;
    }

   else if (op=='-')

      cout<<valeur1-valeur2<<endl;

   else if (op=='/')

       cout<<valeur1/valeur2<<endl;
    

   else if (op=='*')
    
       cout<<valeur1*valeur2<<endl;
      

   else if (op!='+','-','/','*')

       cout<<"Erreur: operateur inconnu : "<<op<<endl;
       
return 0;

}