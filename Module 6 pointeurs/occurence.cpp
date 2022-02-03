#include <iostream>
#include <cstring>
using namespace std;

int occure(char *pt_tab);

int main() {

char tab[50];
int i,occurence=0;
  cout << "Entrez une phrase svp !"<<endl;
  
      cin.getline(tab,50);
  

  occurence=occure(tab);
  cout<<"l'occurence de a est "<<occurence<<endl;
  
  return 0;
}
int occure(char *pt_tab){

int i,foccurence=0;

for(i=0;i<strlen(pt_tab);i++)
{

  if(pt_tab[i]=='a')
   foccurence++;




}


return foccurence;

}