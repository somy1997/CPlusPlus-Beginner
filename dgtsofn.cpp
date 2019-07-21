#include <iostream.h>
#include <math.h>
void main()
{
long int n,i=1;
int r;
cout<<"ENTER THE NUMBER WHOSE DIGITS ARE TO BE PRINTED - \n";
cin>>n;
while(n)
{
r=n%10;
cout<<"\nDIGIT IN "<<i<<"'S PLACE - "<<r;
n=n/10;
i=i*10;
}
}
