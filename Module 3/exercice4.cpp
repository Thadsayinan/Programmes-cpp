#include <iostream>
using namespace std;

int main()

{
   int nbrSecret = 15;
   int i, nombre;

   for (i = 0; i < 10; i = i + 1)

   {
      cout << "Pour trouver le nombre secret, entrez un nombre svp !\n";
      cin >> nombre;

      if (nombre < 15)

         cout << "le " << nombre << " est plus  petit que le nombre secret !" << endl;

      else if (nombre > 15)
      {
         cout << "le " << nombre << " est plus  grand que le nombre secret !\n";
      }
      else if (nombre == 15)
         
      {
         cout << "Vous avez gagne !!!" << endl;
         i = 11;
      }
      else cout << "erreur" << endl;
   }

   if (i == 10)
      cout << "Vous avez perdu\n";

   return 0;
}