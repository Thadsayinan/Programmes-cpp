#include <iostream>
#include <cstring>
using namespace std;

struct elevesSnir{


    char nom[20];
    char prenom[20];
    int  anneeDeNaissance;
    int  note[10];
};

int main() {

elevesSnir eleves[2];

cout<<"Entrez les information svp !"<<endl;
for(int i=0;i<2;i++)
{
cout<<"Entrez le nom d'etudiant 1."<<endl;
cin>>eleves[i].nom;
cout<<"Entrez le nom d'etudiant 2."<<endl;
cin>>eleves[i].nom;
cout<<"Entrez le prenom d'etudiant 1."<<endl;
cin>>eleves[i].prenom;
cout<<"Entrez le prenom d'etudiant 2."<<endl;
cin>>eleves[i].prenom;
cout<<"Entrez l'annee de naissance d'etudiant 1."<<endl;
cin>>eleves[i].anneeDeNaissance;
cout<<"Entrez l'annee de naissance d'etudiant 2."<<endl;
cin>>eleves[i].anneeDeNaissance;
cout<<"Entrez les 10 notes d'etudiant 1."<<endl;
for(int j=0;j<10;j++)
{
cin>>eleves[i].note[j];
}
cout<<"Entrez les 10 notes d'etudiant 2."<<endl;
for(int j=0;j<10;j++)
{
cin>>eleves[i].note[j];
}

}

return 0;

}