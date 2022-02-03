#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;


int main ()

{

char tabAdresse[30];
int i,j=0;


cout<<"Tapez une adresse IP sous la forme xxx.xxx.xxx.xxx"<<endl;
cin.getline(tabAdresse,50);
for(i=0;i<50;i++)
{
if (tabAdresse[i]==46 )
  j=j+1;
}

 return 0;
}