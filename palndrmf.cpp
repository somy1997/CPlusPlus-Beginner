#include <iostream.h>
#include <math.h>
void main()
{
char a=1;
while(a==1)
{
unsigned long int n,i,rev=0;
int r;
cout<<"ENTER THE NUMBER WHOSE DIGITS ARE TO BE PRINTED - \n";
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
	{
	while(rev!=i)
	{
	cout<<"NUMBER IS NOT PALLINDROMIC\n\n";
	n=rev+i;
	cout<<"NUMBER = REVERSE + NUMBER = "<<n<<"\n";
	i=n;
	rev=0;
	while(n)
	{
	r=n%10;
	n=n/10;
	rev=rev*10+r;
	}
	cout<<"REVERSE = "<<rev<<"\n";
	}
	cout<<"NUMBER IS PALLINDROMIC\n\n";
	}
}
}
