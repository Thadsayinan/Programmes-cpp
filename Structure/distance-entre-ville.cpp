#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct trajet{


    string villeD;
    string villeA;
    int distance;

};

int main() {

string villeDepart,villeArrive;
int distanceTotal=0;

trajet ttrajet[10];

ttrajet[0].villeD="Liege";
ttrajet[0].villeA="Luxembourg";
ttrajet[0].distance=155;
ttrajet[1].villeD="Luxembourg";
ttrajet[1].villeA="Nancy";
ttrajet[1].distance=121;
ttrajet[2].villeD="Nancy";
ttrajet[2].villeA="Dijon";
ttrajet[2].distance=201;
ttrajet[3].villeD="Dijon";
ttrajet[3].villeA="Beaune";
ttrajet[3].distance=45;
ttrajet[4].villeD="Beaune";
ttrajet[4].villeA="Lyon";
ttrajet[4].distance=157;
ttrajet[5].villeD="Lyon";
ttrajet[5].villeA="Orange";
ttrajet[5].distance=198;
ttrajet[6].villeD="Orange";
ttrajet[6].villeA="Narbonne";
ttrajet[6].distance=185;
ttrajet[7].villeD="Narbonne";
ttrajet[7].villeA="Perpignan";
ttrajet[7].distance=64;
ttrajet[8].villeD="Perpignan";
ttrajet[8].villeA="Le Boulou";
ttrajet[8].distance=22;
ttrajet[9].villeD="Le Boulou";
ttrajet[9].villeA="Barcelone";
ttrajet[9].distance=160;


cout<<"Entrez une ville de Depart svp !"<<endl;
getline(cin,villeDepart);
cout<<"Entrez une ville d'Arriver svp !"<<endl;
getline(cin,villeArrive);

for(int i=0;i<10;i++){

if((villeDepart==ttrajet[i].villeD) & (villeArrive==ttrajet[i].villeA))
{
    


    distanceTotal=distanceTotal+ttrajet[i].distance;
}



}

cout<<"La distance total entre "<<villeDepart<<" et "<<villeArrive<<" est "<<distanceTotal<<endl;

return 0;

}