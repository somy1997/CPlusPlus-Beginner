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
int i,n;
cout<<"Enter number upto which series has to be printed - ";
cin>>n;
i=2;
while(i<=n)
	{
	if(prime(i))
		{
		cout<<i<<endl;
		}
	i++;
	}
}
