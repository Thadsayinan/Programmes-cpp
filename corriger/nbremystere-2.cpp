#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
int nombre=0;

int i;
srand(time(0));
int nbresecret = rand()%100+1;

for(i=0;i<10;i++)
{
    cout<<"entrez un nombre"<<endl;
    cin>>nombre;
    if(nombre>nbresecret)
    {
        cout<<"plus petit"<<endl;
    }
    else if (nombre<nbresecret)
    {
        cout<<"plus grand"<<endl; 
    }
    else if(nombre==nbresecret)
    {
        cout<<"gagner"<<endl;
        i=15;
    }
    else
    {
        cout<<"erreur"<<endl;
    }
}
if(i==10)
    cout<<"perdu"<<endl;
return 0;
}

