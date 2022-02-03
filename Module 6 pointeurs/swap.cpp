#include<iostream>
using namespace std;


int main()
{

    int a,b;
    int *x,*y;
    a=50;
    b=100;
    x=&a;
    y=&b;

 cout<<"la valeur de a est  "<<*x<<endl;
 cout<<"la valeur de b est  "<<*y<<endl;
*x=*y;
 cout<<"la valeur de a est "<<*x<<endl;
 

 return 0;
}