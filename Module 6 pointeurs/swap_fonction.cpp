#include<iostream>
using namespace std;

void swap(int* x,int* y,int k)

{
   k=*x;
   *x=*y; 
   *y=k;
}
int main()
{

    int a,b;
   
    

 cout<<"Entrez la valeur a svp !"<<endl;
 cin>>a;
 cout<<"Entrez la valeur b svp !"<<endl;
 cin>>b;
 cout<<"La  valeur a entre est "<<a<<endl;
 cout<<"La  valeur b entre est "<<b<<endl;



swap(a,b);
 cout<<"La valeur de a deviens "<<a<<endl;
 cout<<"La valeur de b deviens "<<b<<endl;

 return 0;
}