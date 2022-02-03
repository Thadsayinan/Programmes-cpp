#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()

{

    char tabPhrase[50], tabMot1[10], tabMot2[10], tabMot3[10], tabMot4[10], tabMot5[10], tabMot6[10];
    int tabsep[25], i, nbrSep = 0;

    cout << "Tapez une Phrase avec des espaces svp !!" << endl;
    cin.getline(tabPhrase, 50);
    for (i = 0; i < strlen(tabPhrase); i++)
    {

        if (tabPhrase[i]==' ' )
        {

            tabsep[nbrSep] = i;
            nbrSep = nbrSep + 1;
        }
    }
    strncpy(tabMot1, tabPhrase,tabsep[0]);
    strncpy(tabMot2,tabPhrase+tabsep[0]+1,tabsep[0]-tabsep[1]-1);
    strncpy(tabMot3,tabPhrase+tabsep[1]+1,tabsep[2]-tabsep[1]-1);
    strncpy(tabMot4,tabPhrase+tabsep[2]+1,tabsep[3]-tabsep[4]-1);
    strncpy(tabMot5,tabPhrase+tabsep[3]+1,tabsep[5]-strlen(tabPhrase)-1);


    cout<<"mot 1 : "<<tabMot1<<endl;
    cout<<"mot 2 : "<<tabMot2<<endl;
    cout<<"mot 3 : "<<tabMot3<<endl;
    cout<<"mot 4 : "<<tabMot4<<endl;
    cout<<"mot 5 : "<<tabMot5<<endl;
    
    cout<<tabsep[0]<<tabsep[1]<<tabsep[2]<<tabsep[3]<<tabsep[4]<<tabsep[5];

    return 0;
}