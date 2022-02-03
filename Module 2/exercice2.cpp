#include <iostream>
using namespace std;
#include "string"
int main ()

{
   int valeur;
   string nombre;

   cout<<"Entrez un nombre en lettre svp !"<<endl;
   cin>>nombre;

    if (nombre=="zero")

     {

      cout<<"La valeur est 0."<<endl;

     }

   else if (nombre=="un")

      cout <<"La valeur est 1."<<endl;

   else if (nombre=="deux")

      cout <<"La valeur est 2."<<endl;

   else if (nombre=="trois")

       cout <<"La valeur est 3."<<endl;

    else if (nombre=="quatre")

    cout<<"La valeur est 4."<<endl;

    else if (nombre!="zero","un","deux","trois","quatre")

     cout<<"Je ne connais pas ce chiffre."<<endl;
   





return 0;

}