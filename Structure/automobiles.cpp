#include <iostream>
#include <cstring>
using namespace std;

struct automobiles{


    char marque[10];
    char immatriculation[8];
    int  anneePC;
    int  reservoir;




};

int main() {

automobiles monAuto;

cout<<"Entrez les information pour remplir MonAuto svp !"<<endl;

cout<<"Entrez la marque de la voiture."<<endl;
cin>>monAuto.marque;
cout<<"Entrez l'immatriculation."<<endl;
cin>>monAuto.immatriculation;
cout<<"Entrez l'annee de premiere immatriculation."<<endl;
cin>>monAuto.anneePC;
cout<<"Le nombre de litres de carburant dans le reservoir."<<endl;
cin>>monAuto.reservoir;

cout<<monAuto.marque<<endl;
cout<<monAuto.immatriculation<<endl;
cout<<monAuto.anneePC<<endl;
cout<<monAuto.reservoir<<endl;
return 0;

}