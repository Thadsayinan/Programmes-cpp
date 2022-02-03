#include <iostream>
using namespace std;

int main ()

{
int i;

/*cout<<"Entrez un nombre svp !\n";*/
/*cin>>nombre;*/

do 
{

cout<<"Entrez un nombre svp"<<endl;
cin>>i;
for(i;i>=2;i=i-2)



if(i%2==0)
cout<<i<<endl;


}
while(i==2);

return 0;
 
}