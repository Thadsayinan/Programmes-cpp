#include <iostream>
#include <cstring>
using namespace std;

void maxmin(int *pt_tab,int &fmin,int &fmax);

int main() {

int tab[5];
int i,min=20,max=0;
  cout << "Entrez les 5 velaurs svp !"<<endl;
  for(i=0;i<5;i++)
  {
      cin>>tab[i];
  }

  maxmin(tab,min,max);
  cout<<"la valeur max est "<<max<<endl;
  cout<<"la valeur min est "<<min<<endl;
  return 0;
}
void maxmin(int *pt_tab,int &fmin,int &fmax){

int i;

for(i=0;i<5;i++)
{

  if(pt_tab[i]<=fmin)
  fmin=pt_tab[i];
  if(pt_tab[i]>=fmin)
  fmax=pt_tab[i];




}




}