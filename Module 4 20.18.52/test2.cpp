#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){

    char phraseCodee[50],phrase[50];
    int nbre,cpt;


    cout << "Tapez une Phrase avec des espaces svp !!" << endl;
    cin.getline(phraseCodee, 50);
    if (phrase[cpt]>='A'&&phrase[cpt]<='Z')
            phraseCodee[cpt]=(((phrase[cpt]-65)+nbre)%26)+65;
        else if( phrase[cpt]>='a'&&phrase[cpt]<='z')
            phraseCodee[cpt]=(((phrase[cpt]-97)+nbre)%26)+97;


cout<<phraseCodee<<endl;
    return 0;

}