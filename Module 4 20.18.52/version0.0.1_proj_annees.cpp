#include "iostream"
#include "stdio.h"
#include "cstdlib"
#include <cstring>

using namespace std;
int main()
{

    char tabPhrase[50],tabCrypte[50],tabColle[50];
    int i,j=0;
    cout<< "Tapez une phrase que vous voulez crypter" <<endl;
    cin.getline(tabPhrase, 50);
   for (i=strlen(tabPhrase) - 1; i >= 0;i--)
       {
        if (tabPhrase[i]  >= 97 && tabPhrase[i] <=122)
        tabPhrase[i] =tabPhrase[i]+2;
        j++;
        
        
        cout<<tabPhrase[i];
        //strncpy(tabColle,tabPhrase,strlen(tabPhrase));
       
      }
     
    
    return 0;
}
