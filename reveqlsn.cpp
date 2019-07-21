#include <iostream.h>
#include <math.h>
void main()
{
char a=1;
while(a==1)
{
long int n,i,rev=0;
int r;
cout<<"ENTER A NUMBER - \n";
cin>>n;
i=n;
while(n)
{
r=n%10;
n=n/10;
rev=rev*10+r;
}
if(rev==i)
	cout<<"NUMBER IS PALLINDROMIC\n\n";
	else
	cout<<"NUMBER IS NOT PALLINDROMIC\n\n";
}
}
