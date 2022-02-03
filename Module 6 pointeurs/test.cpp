#include<iostream>
using namespace std;


void test (int *pt_tab,int taille, int *pt_min, int *pt_max)
{
int i;
int max=100;
int min=0;
for (int i=0;i<5;i++)
{


if(pt_tab[i]>min)

min=pt_tab[i];
if (pt_tab[i]<max)
   max=pt_tab[i];

}

*pt_min=min;
*pt_max=max;

}

int main()
{

int taille=5,tab[taille]={10,2,6,4,5}, min, max;



test(&tab[0],taille, &min, &max );



cout<<"La valeur min est "<<min<<" et la valeur max est "<<max<<endl;
return 0;
}