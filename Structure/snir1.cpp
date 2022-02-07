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
elevesSnir eleve1,eleve2;
int i=0;

cout<<"Entrez les information svp !"<<endl;

cout<<"Entrez le nom d'etudiant 1."<<endl;
cin>>eleve1.nom;
cout<<"Entrez le prenom d'etudiant 1."<<endl;
cin>>eleve1.prenom;
cout<<"Entrez l'annee de naissance d'etudiant 1."<<endl;
cin>>eleve1.anneeDeNaissance;
cout<<"Entrez les 10 notes d'etudiant 1."<<endl;
for(i=0;i<10;i++)
{
cin>>eleve1.note[i];
somme1+=eleve1.note[i];
}

cout<<"Entrez le nom d'etudiant 2."<<endl;
cin>>eleve2.nom;
cout<<"Entrez le prenom d'etudiant 2."<<endl;
cin>>eleve2.prenom;
cout<<"Entrez l'annee de naissance d'etudiant 2."<<endl;
cin>>eleve2.anneeDeNaissance;
cout<<"Entrez les 10 notes d'etudiant 2."<<endl;
for(i=0;i<10;i++)
{
cin>>eleve2.note[i];
somme2+=eleve2.note[i];

}



cout<<somme1<<endl;
cout<<somme2<<endl;
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