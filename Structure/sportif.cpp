#include <iostream>
#include <cstring>
using namespace std;

    struct tcompetence
{
    int vitesse;
    int frappe;
    string sport;
};

struct tadresse{
    int numero;
    string rue;
    int codePostal;
    string ville;
};
struct sportif
{
    int numClient;
    string nom;
    string prenom;
    tcompetence competence;
    tadresse adresse;
};




int main(){
    string nom;



sportif tsportif[2];
tsportif[0].nom="madani";
tsportif[0].adresse.ville="villepinte";
tsportif[0].competence.frappe=90;
tsportif[0].competence.sport="tennis";
tsportif[1].nom="mechehar";
tsportif[1].adresse.ville="paris";
tsportif[1].competence.frappe=75;
tsportif[1].competence.sport="ping-pong";
cout<<"entrez le nom concerne par votre recherche!"<<endl;
cin>>nom;
for(int i=0;i<2;i++)
{
if(tsportif[i].competence.sport=="ping-pong")
    cout<<tsportif[i].nom<<endl;
if(tsportif[i].nom==nom)
    cout<<"la ville de "<<nom<<" est "<<tsportif[i].adresse.ville<<endl;
}



return 0;
}