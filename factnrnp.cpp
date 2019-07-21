#include <iostream.h>    //no return no parameter
void factorial()
{
int n,f=1,i;
cout<<"Enter n";
cin>>n;
for(i=1;i<=n;i++)
   f=f*i;
cout<<"F="<<f;
}
void main()
{ 
factorial();
}
