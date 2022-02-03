#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()

{

    char tabPhrase[50];
    int i;

    cout << "Tapez une Phrase avec des espaces svp !!" << endl;
    cin.getline(tabPhrase, 50);

 while (tabPhrase[i] != '\0')
    {
        if (tabPhrase[i]  >= 97 &&  tabPhrase[i] <= 122)
            tabPhrase[i] = tabPhrase[i] - 32;
            i++;
    }

 cout<<tabPhrase<<endl;
}



