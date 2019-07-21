#include <iostream.h>
#include <conio.h>
int armstrong(int n)
{
int i=n,sum=0,r;
while (n)
	{
	r=n%10;
	sum=sum+r*r*r;
	n=n/10;
	}
if (sum==i)
	return 1;
else
	return 0;
}
void main()
{
for(int i=1; ;i=i)
{
clrscr();
float n,ctr;
cout<<"Enter the number till which the series has to be printed - ";
cin>>n;
ctr=1;
while(ctr<=n)
	{
	if (armstrong(ctr))
		{
		cout<<ctr<<",\t";
		}
	ctr++;
	}
getch();
}
}
