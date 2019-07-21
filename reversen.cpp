#include <iostream.h>
#include <math.h>
void main()
{
long int n,i=1,rev=0;
int r;
cout<<"ENTER THE NUMBER WHOSE DIGITS ARE TO BE PRINTED - ";
cin>>n;
while(n)
{
r=n%10;
cout<<"\nDIGIT IN "<<i<<"'S PLACE - "<<r;
n=n/10;
rev=rev*10+r;
i=i*10;
}
cout<<"\n\nNUMBER IN REVERSE ORDER = "<<rev;
cout<<"\n\nDIGITS OF NUMBER IN REVERSE ORDER : \n\n";
while(rev)
{
i=i/10;
r=rev%10;
cout<<"DIGIT IN "<<i<<"'S PLACE - "<<r<<"\n";
rev=rev/10;
}
}
