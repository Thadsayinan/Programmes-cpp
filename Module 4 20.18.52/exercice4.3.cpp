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

    for (i = strlen(tabPhrase) - 1; i >= 0; i--)

    {
        putchar(tabPhrase[i]);
        
    }
    
    return 0;
}