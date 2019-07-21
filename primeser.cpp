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
int i,ctr,term;
cout<<"Enter number of terms - ";
cin>>term;
i=2;ctr=1;
while(i<=32768 && ctr<=term)
	{
	if(prime(i))
		{
		cout<<i<<endl;
		ctr++;
		}
	i++;
	}
}
