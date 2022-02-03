#include <iostream>
#include <cstring>
using namespace std;

int produitOusomme(int *pt_tab, char& choix);

int main()
{
int tab[20];
int i,resultat=0;
char choix;


cout<<"Entrez 20  Entiers svp !"<<endl;

while(tab[i]>=0 && tab[i]<=20)
    {
for(i=0;i<20;i++)
{
    
      cin>>tab[i];
    
}
}

cout<<"Voulez-vous calculer le produit(*) ou la somme(+) ? "<<endl;
cin>>choix;
resultat=produitOusomme(tab,choix);
cout<<"la valeur total est "<<resultat<<endl;

    return 0;
}
int produitOusomme(int *pt_tab, char& choix)
{
int i,produit=1,somme=0;
cout<<choix<<endl;


if(choix=='*')
{
for(i=0;i<20;i++)
{

    produit=produit*pt_tab[i];
    
}
return produit;

}
if(choix=='+')
for(i=0;i<20;i++)
{

    somme=somme+pt_tab[i];
    
}

return somme;
}