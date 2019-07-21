#include <iostream.h>    //no return yes parameter
void factorial(int n)
{
int f=1,i;
for(i=1;i<=n;i++)
   f=f*i;
cout<<"F="<<f;
}
void main()
{ int x;
cout<<"Enter x";
cin>>x;
factorial(x);
}


