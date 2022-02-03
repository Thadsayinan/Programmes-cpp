#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Entrez votre age" << endl;
    cin >> age;
    if (age >= 18)
        cout << "Majeur" << endl;
    else
        cout << "Mineur" << endl;
    return 0;
}