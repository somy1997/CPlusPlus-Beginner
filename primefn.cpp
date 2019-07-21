#include <iostream.h>
int prime(int n)
{
for(int i=2;i<=n/2;i++)
	if(n%i==0)
		return 0;
return 1;
}
void main()
{
int n;
cout<<"Enter the number to be checked - ";
cin>>n;
if(prime(n))
	cout<<"Entered number is a prime.";
else
	cout<<"Entered number is not a prime.";
}
