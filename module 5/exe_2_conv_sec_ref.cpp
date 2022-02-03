#include <iostream>
using namespace std;

int enSeconde (int& h,int& m, int& s)
{
    int resultat;
    resultat=(h*60)*60+m*60+s;
    return resultat;


}

int main()

{

   int heures,minutes,secondes,convSeconde;

   cout<<"Entrez un nombre d'heures svp  !"<<endl;
   cin>>heures;
   cout<<"Entrez un nombre de minutes svp  !"<<endl;
   cin>>minutes;
   cout<<"Entrez un nombre d'secondes svp  !"<<endl;
   cin>>secondes;


   convSeconde=enSeconde(heures,minutes,secondes);

   cout<<"le nombre en seconde de  "<<heures<<"h"<<minutes<<"."<<secondes<<" est "<<convSeconde<<"s"<<endl;



    return 0;
}
