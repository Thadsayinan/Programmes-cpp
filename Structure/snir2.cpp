#include <iostream>
#include <cstring>
using namespace std;

struct elevesSnir{


    char nom[20];
    char prenom[20];
    int  anneeDeNaissance;
    double  note[10];
};

int main() {
double moyenne1=0,moyenne2=0,somme1=0,somme2=0;
elevesSnir eleves[2];


cout<<"Entrez les information svp !"<<endl;
for(int i=0;i<1;i++){
cout<<"Entrez le nom d'etudiant 1."<<endl;
cin>>eleves[i].nom;
cout<<"Entrez le prenom d'etudiant 1."<<endl;
cin>>eleves[i].prenom;
cout<<"Entrez l'annee de naissance d'etudiant 1."<<endl;
cin>>eleves[i].anneeDeNaissance;
cout<<"Entrez les 10 notes d'etudiant 1."<<endl;
for(int j=0;j<10;j++)
{
cin>>eleves[i].note[j];
somme1+=eleves[i].note[j];
}

cout<<"Entrez le nom d'etudiant 2."<<endl;
cin>>eleves[i].nom;
cout<<"Entrez le prenom d'etudiant 2."<<endl;
cin>>eleves[i].prenom;
cout<<"Entrez l'annee de naissance d'etudiant 2."<<endl;
cin>>eleves[2].anneeDeNaissance;
cout<<"Entrez les 10 notes d'etudiant 2."<<endl;
for(int j=0;j<10;j++)
{
cin>>eleves[i].note[j];
somme2+=eleves[i].note[j];

}

}


moyenne1=somme1/10;
moyenne2=somme2/10;
if(moyenne1>moyenne2)
cout<<"l'eleve 1 a le meilleur moyenne"<<endl;

else if(moyenne1<moyenne2)
cout<<"l'eleve 2 a le meilleur moyenne"<<endl;
else 
cout<<"egal"<<endl;
return 0;

}