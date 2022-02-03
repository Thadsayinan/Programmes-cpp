#include <iostream>
using namespace std;

double carre(double x)
{
    double resultat;
    resultat=x*x;
    return resultat;


}

int main()

{

   double nombre ,carreNombre;

   cout<<"Entrez un nombre svp !"<<endl;
   cin>>nombre;

   carreNombre=carre(nombre);

   cout<<"le carre de "<<nombre<<" est "<<carreNombre<<endl;



    return 0;
}
