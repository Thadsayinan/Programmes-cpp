#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()

{
   int random = rand() ;
   int i, nombre;
   cout << "Vous avez 15 tentatives pour trouver le nombres\n";

   for (i = 14; i > -1; i = i - 1)

   {
      
      cout << "Quel est le nombre ?\n";
      cin >> nombre;

      if (nombre < random)

         cout << "le " << nombre << " est plus  petit que le nombre secret !" <<"il vous reste "<<i<<" Tentative"<< endl;
         


      else if (nombre > random)
      {
         cout << "le " << nombre << " est plus  grand que le nombre secret !"<<"il vous reste "<<i<<" Tentative"<<endl;
      }
      else if (nombre == random)
         
      {
         cout << "Vous avez gagne !!!" << endl;
         i = -2;
      }
      else cout << "erreur" << endl;
   }

   if (i == 0)
      cout << "Vous avez perdu\n";

   return 0;
}