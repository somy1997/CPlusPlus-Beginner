#include <iostream.h>
void main()
{
int prime=1; unsigned int n;
cout<<"Enter number - ";
cin>>n;
for (int i=2; i<=n/2; i++)
	{
	if (n%i==0)
		{
		cout<<"Number is not prime";
		prime=0;
		break;
		}
	}
if (prime==1)
	cout<<"Number is prime";
}